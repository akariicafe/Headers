@class NSString, TRIClient, NSSet;

@interface CPAnalyticsTrialLoggingDestination : NSObject <CPAnalyticsDestination>

@property (readonly, nonatomic) int trialProjectId;
@property (readonly, nonatomic) NSString *trialNamespace;
@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, nonatomic) NSString *trialTreatmentId;
@property (readonly, nonatomic) NSString *trialExperimentId;
@property (readonly, nonatomic) NSSet *metricEvents;
@property (readonly, nonatomic) BOOL forceEnabledForTesting;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)_logTrialCounterMetricWithCPAnalyticsEvent:(id)a0;

@end
