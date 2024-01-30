@class NSArray, UsageAnalytics, AnalyticsWorkspace;

@interface UsageFeed : NSObject {
    AnalyticsWorkspace *workspace;
    UsageAnalytics *handleAnalytics;
    unsigned int lastSubscriberTag;
    unsigned int lastSkippedTag;
    unsigned long long numUnrolledCellCounts;
    unsigned long long numRolledCellCounts;
    unsigned long long numNewlyCreated;
    unsigned long long numAppended;
}

@property (nonatomic) id delegate;
@property (retain, nonatomic) NSArray *processFeedData;

- (BOOL)usageToDateFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (void)_rollValuesFrom:(id)a0 toDict:(id)a1;
- (void)_networkDomainsQueryViewTypeWebsiteHits:(id)a0 entityName:(id)a1 website:(id)a2 limit:(unsigned long long)a3 actions:(id)a4 callbackBlock:(id /* block */)a5;
- (id)initWithWorkspace:(id)a0;
- (BOOL)setNetworkDomainsOptions:(id)a0 reply:(id /* block */)a1;
- (void)clearLoggingCounters;
- (BOOL)typicalUsageFor:(id)a0 nameKind:(id)a1 intervalKind:(unsigned int)a2 reply:(id /* block */)a3;
- (void)prepProcessDataFractionWithTag:(unsigned int)a0 from:(id)a1 until:(id)a2 pollInterval:(float)a3;
- (void)_networkDomainsQueryViewTypeDomainWebsites:(id)a0 entityName:(id)a1 domain:(id)a2 limit:(unsigned long long)a3 actions:(id)a4 callbackBlock:(id /* block */)a5;
- (BOOL)calendarUsageFor:(id)a0 nameKind:(id)a1 dayResolution:(id)a2 daySlot:(unsigned short)a3 weekSlot:(unsigned short)a4 reply:(id /* block */)a5;
- (void)displayLoggingCounters:(id)a0;
- (void)_legacyNetworkDomainsQueryOnService:(id)a0 entityName:(id)a1 pred:(id)a2 limit:(unsigned long long)a3 actions:(id)a4 options:(id)a5 postProcessingBlock:(id /* block */)a6;
- (id)networkDomainInitiatedTypeString:(unsigned int)a0;
- (void)__networkDomainsQuerySecondLevelViewDomains:(id)a0 entityName:(id)a1 unnamedDomainsOption:(long long)a2 limit:(unsigned long long)a3 actions:(id)a4 viewPredicate:(id)a5 callbackBlock:(id /* block */)a6;
- (void)_networkDomainsQueryViewTypeDomainApps:(id)a0 entityName:(id)a1 domain:(id)a2 limit:(unsigned long long)a3 actions:(id)a4 callbackBlock:(id /* block */)a5;
- (BOOL)resetUsageDataFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (void)_performNetDomainsQueryOnService:(id)a0 entityName:(id)a1 fetchProps:(id)a2 pred:(id)a3 sort:(id)a4 actions:(id)a5 queryTimer:(id)a6 replyProcessBlock:(id /* block */)a7 accumulatedResults:(id)a8 callbackBlock:(id /* block */)a9;
- (BOOL)networkBitmapsToDateWithOptionsFor:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (BOOL)_rollUsageValuesFromDict:(id)a0 toDict:(id)a1 forKey:(id)a2 subscriberTag:(unsigned int)a3;
- (void)__networkDomainsQueryDomains:(id)a0 entityName:(id)a1 unnamedDomainsOption:(long long)a2 limit:(unsigned long long)a3 actions:(id)a4 accumulatedResults:(id)a5 aggregateProperty:(id)a6 predicate:(id)a7 altAggregateProperty:(id)a8 altPredicate:(id)a9 ipAggregateProperty:(id)a10 replyProcessBlock:(id /* block */)a11 callbackBlock:(id /* block */)a12;
- (void)_networkDomainsQueryViewTypeWebsite:(id)a0 entityName:(id)a1 verificationContext:(long long)a2 limit:(unsigned long long)a3 actions:(id)a4 callbackBlock:(id /* block */)a5;
- (void)_networkDomainsQueryViewTypeDomain:(id)a0 entityName:(id)a1 unnamedDomainsOption:(long long)a2 limit:(unsigned long long)a3 actions:(id)a4 callbackBlock:(id /* block */)a5;
- (BOOL)getNetworkDomainsOptions:(id)a0 reply:(id /* block */)a1;
- (void)__networkDomainsQueryWebsites:(id)a0 entityName:(id)a1 verificationContext:(long long)a2 limit:(unsigned long long)a3 actions:(id)a4 viewPredicate:(id)a5 callbackBlock:(id /* block */)a6;
- (void)_networkDomainsQueryViewTypeAppWebsites:(id)a0 entityName:(id)a1 bundleIdentifier:(id)a2 verificationContext:(long long)a3 limit:(unsigned long long)a4 actions:(id)a5 callbackBlock:(id /* block */)a6;
- (BOOL)getUsageOption:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (BOOL)identifierForUUID:(id)a0 reply:(id /* block */)a1;
- (BOOL)performNetworkDomainsActionWithOptions:(id)a0 reply:(id /* block */)a1;
- (id)_typicalUsagePresentation:(id)a0 nameKind:(id)a1 source:(id)a2;
- (void)_networkDomainsQueryViewTypeAppDomains:(id)a0 entityName:(id)a1 bundleIdentifier:(id)a2 unnamedDomainsOption:(long long)a3 limit:(unsigned long long)a4 actions:(id)a5 callbackBlock:(id /* block */)a6;
- (BOOL)networkDomainsToDateWithOptionsFor:(id)a0 nameKind:(id)a1 domainType:(unsigned short)a2 startTime:(id)a3 options:(id)a4 reply:(id /* block */)a5;
- (id)_usagePresentation:(id)a0 nameKind:(id)a1 altName:(id)a2 altNameKind:(id)a3 source:(double *)a4 since:(id)a5;
- (id)_composePredicateLineWithName:(id)a0 keyPath:(id)a1 isSweep:(BOOL *)a2 wantGeneric:(BOOL)a3 gotGeneric:(BOOL *)a4;
- (void)prepProcessDataFractionWithTag:(unsigned int)a0 andMetadata:(unsigned int)a1 from:(id)a2 until:(id)a3 pollInterval:(float)a4;
- (void)_networkDomainsQueryViewTypeApp:(id)a0 entityName:(id)a1 limit:(unsigned long long)a2 actions:(id)a3 callbackBlock:(id /* block */)a4;
- (BOOL)algosScoreToDateWithOptionsFor:(id)a0 nameKind:(id)a1 startTime:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (id)_calendarUsagePresentation:(id)a0 nameKind:(id)a1 source:(id)a2;
- (id)_performRollUp:(unsigned int)a0 andMetadata:(unsigned int)a1 from:(id)a2 until:(id)a3;
- (void)batchFetchCallbackWithResults:(id)a0 entityName:(id)a1 pred:(id)a2 service:(id)a3 limit:(unsigned long long)a4 offset:(unsigned long long)a5 container:(id)a6 actions:(id)a7 reply:(id /* block */)a8;
- (BOOL)setUsageOption:(id)a0 reply:(id /* block */)a1;
- (void)_networkDomainsQueryViewTypeWebsiteDomains:(id)a0 entityName:(id)a1 website:(id)a2 unnamedDomainsOption:(long long)a3 limit:(unsigned long long)a4 actions:(id)a5 callbackBlock:(id /* block */)a6;
- (void)_networkDomainsQueryViewTypeWebsiteApps:(id)a0 entityName:(id)a1 website:(id)a2 limit:(unsigned long long)a3 actions:(id)a4 callbackBlock:(id /* block */)a5;
- (id)groupRecordsByBundleId:(id)a0;
- (BOOL)networkDomainsToDateWithOptionsFor:(id)a0 nameKind:(id)a1 domainType:(unsigned short)a2 startTime:(id)a3 options:(id)a4 fetchProperties:(id)a5 reply:(id /* block */)a6;
- (void)_networkDomainsQueryViewTypeAppDomainsOtherContent:(id)a0 entityName:(id)a1 bundleIdentifier:(id)a2 unnamedDomainsOption:(long long)a3 limit:(unsigned long long)a4 actions:(id)a5 callbackBlock:(id /* block */)a6;
- (BOOL)usageToDateWithOptionsFor:(id)a0 nameKind:(id)a1 options:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (id)createEndpointEntryFrom:(id)a0 withKey:(id)a1 showDetails:(BOOL)a2;

@end
