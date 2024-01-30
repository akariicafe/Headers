@class NSString, PETScalarEventTracker, PETDistributionEventTracker;

@interface SBMedusaConfigurationUsageMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    long long _currentSpaceConfig;
    long long _currentFloatingConfig;
    BOOL _isPIPVideoActive;
    BOOL _isFloatingActive;
    double _floatingAppActivationTimestamp;
    double _pipVideoActivationTimestamp;
    PETScalarEventTracker *_medusaUsageTracker;
    PETDistributionEventTracker *_floatingAppSessionTimeTracker;
    PETDistributionEventTracker *_pipVideoSessionTimeTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)init;
- (BOOL)_floatingAppIsActiveForConfiguration:(long long)a0;
- (void).cxx_destruct;
- (void)_trackMedusaConfigChange;

@end
