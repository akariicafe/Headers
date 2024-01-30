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

- (BOOL)calendarUsageFor:(id)a0 nameKind:(id)a1 dayResolution:(id)a2 daySlot:(unsigned short)a3 weekSlot:(unsigned short)a4 reply:(id /* block */)a5;
- (void)_rollValuesFrom:(id)a0 toDict:(id)a1;
- (void)displayLoggingCounters:(id)a0;
- (BOOL)resetUsageDataFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_calendarUsagePresentation:(id)a0 nameKind:(id)a1 source:(id)a2;
- (BOOL)identifierForUUID:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (BOOL)setUsageOption:(id)a0 reply:(id /* block */)a1;
- (void)prepProcessDataFractionWithTag:(unsigned int)a0 andMetadata:(unsigned int)a1 from:(id)a2 until:(id)a3 pollInterval:(float)a4;
- (id)_typicalUsagePresentation:(id)a0 nameKind:(id)a1 source:(id)a2;
- (id)networkDomainSessionTypeString:(unsigned long long)a0;
- (BOOL)_rollUsageValuesFromDict:(id)a0 toDict:(id)a1 forKey:(id)a2 subscriberTag:(unsigned int)a3;
- (BOOL)networkBitmapsToDateWithOptionsFor:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)clearLoggingCounters;
- (BOOL)typicalUsageFor:(id)a0 nameKind:(id)a1 intervalKind:(unsigned int)a2 reply:(id /* block */)a3;
- (BOOL)getUsageOption:(id)a0 reply:(id /* block */)a1;
- (id)_usagePresentation:(id)a0 nameKind:(id)a1 altName:(id)a2 altNameKind:(id)a3 source:(double *)a4 since:(id)a5;
- (id)initWithWorkspace:(id)a0;
- (BOOL)usageToDateFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (BOOL)algosScoreToDateWithOptionsFor:(id)a0 nameKind:(id)a1 startTime:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (BOOL)usageToDateWithOptionsFor:(id)a0 nameKind:(id)a1 options:(id)a2 reply:(id /* block */)a3;
- (id)_performRollUp:(unsigned int)a0 andMetadata:(unsigned int)a1 from:(id)a2 until:(id)a3;
- (void)prepProcessDataFractionWithTag:(unsigned int)a0 from:(id)a1 until:(id)a2 pollInterval:(float)a3;
- (id)_composePredicateLineWithName:(id)a0 keyPath:(id)a1 isSweep:(BOOL *)a2 wantGeneric:(BOOL)a3 gotGeneric:(BOOL *)a4;

@end
