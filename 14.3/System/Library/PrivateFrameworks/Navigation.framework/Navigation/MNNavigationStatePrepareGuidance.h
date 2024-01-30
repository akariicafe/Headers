@class NSArray, MNNavigationSessionManager;

@interface MNNavigationStatePrepareGuidance : MNNavigationState {
    NSArray *_previewRoutes;
    unsigned long long _selectedRouteIndex;
    MNNavigationSessionManager *_navigationSessionManager;
}

- (void)stopNavigation;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)enterState;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)type;
- (id)traceManager;
- (id)simulationLocationProvider;
- (void)leaveState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)initWithStateManager:(id)a0 previewRoutes:(id)a1 selectedRouteIndex:(unsigned long long)a2;

@end
