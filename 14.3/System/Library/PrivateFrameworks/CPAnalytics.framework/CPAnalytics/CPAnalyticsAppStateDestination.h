@class NSSet, NSArray, NSString, CPAnalyticsScreenManager;

@interface CPAnalyticsAppStateDestination : CPAnalyticsDashboardDestination <CPAnalyticsDynamicPropertyProvider>

@property (readonly, nonatomic) CPAnalyticsScreenManager *screenManager;
@property (readonly, nonatomic) NSSet *appEventNames;
@property (retain, nonatomic) NSArray *sessionCounters;
@property (retain, nonatomic) NSArray *featureCounters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isValidSessionEndEvent:(id)a0;

- (void)processEvent:(id)a0;
- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)_sendAppSessionEventFromSourceEvent:(id)a0 payload:(id)a1;
- (void)_sendDashboardErrorEventForEvent:(id)a0;
- (void)_sendDashboardMediaEventIfNeededForEvent:(id)a0;
- (id)getDynamicProperty:(id)a0 forEventName:(id)a1 payloadForSystemPropertyExtraction:(id)a2;
- (id)_validateAndParseAppEvents:(id)a0;
- (void)_updateDependenciesBeforeProcessingEvent:(id)a0;
- (id)_createCountersFromAppEvents:(id)a0;
- (void)_sendDashboardScreenViewEventForEvent:(id)a0;
- (id)_createCountersFromConfig:(id)a0 withKey:(id)a1;
- (void)_resetCounters;
- (id)allStandardProperties;
- (void)_sendFeatureCounts;
- (id)_computeSessionData:(id)a0;
- (BOOL)_shouldSendSampleWithRate:(unsigned long long)a0;
- (id)_createCountersFromScreenNames:(id)a0;
- (void)_sendDashboardAppEventForEvent:(id)a0;
- (void)registerSystemProperties:(id)a0;
- (void)_sendDashboardErrorEventIfNeededForEvent:(id)a0;
- (void)_sendDashboardMediaEventForEvent:(id)a0;

@end
