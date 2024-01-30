@class NSString, PETScalarEventTracker;

@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETScalarEventTracker *_pinGestureCompletionTracker;
    PETScalarEventTracker *_unpinGestureCompletionTracker;
    PETScalarEventTracker *_movePIPGestureCompletionTracker;
    PETScalarEventTracker *_moveSideGestureCompletionTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (unsigned long long)_moveActionForInitialFloatingConfig:(long long)a0 finalConfig:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_moveActionForInitialSpaceConfig:(long long)a0 finalConfig:(long long)a1;

@end
