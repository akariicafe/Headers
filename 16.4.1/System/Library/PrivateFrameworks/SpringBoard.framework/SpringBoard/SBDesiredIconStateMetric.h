@class NSString, PETScalarEventTracker;

@interface SBDesiredIconStateMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker *_loadEventTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
