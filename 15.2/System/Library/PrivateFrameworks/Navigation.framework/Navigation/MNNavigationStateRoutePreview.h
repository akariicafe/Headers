@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStateRoutePreview : MNNavigationState {
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void)enterState;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (unsigned long long)type;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (unsigned long long)desiredLocationProviderType;
- (id)traceManager;
- (id)simulationLocationProvider;
- (void)leaveState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)initWithStateManager:(id)a0 previewRoutes:(id)a1 selectedRouteIndex:(unsigned long long)a2;

@end
