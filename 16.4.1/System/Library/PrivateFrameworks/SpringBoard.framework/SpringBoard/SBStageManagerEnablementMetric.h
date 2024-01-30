@class SBFAnalyticsClient, NSString;

@interface SBStageManagerEnablementMetric : NSObject <SBFAnalyticsBackendEventHandling>

@property (readonly, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)initWithAnalyticsClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)chamoisPreferencesSnapshotWithSource:(long long)a0;
- (BOOL)sendCoreAnalyticsEventWithName:(id)a0 source:(long long)a1;

@end
