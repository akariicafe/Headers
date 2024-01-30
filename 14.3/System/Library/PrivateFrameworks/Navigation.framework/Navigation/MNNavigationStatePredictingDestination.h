@class NSString, MNCommuteSession;

@interface MNNavigationStatePredictingDestination : MNNavigationState <MNCommuteSessionObserver> {
    MNCommuteSession *_commuteSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopPredictingDestinations;
- (void)setRoutesForPreview:(id)a0 selectedRouteIndex:(unsigned long long)a1;
- (void)startNavigationWithDetails:(id)a0 activeBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)commuteSessionDidArrive:(id)a0;
- (void)enterState;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)type;
- (void)commuteSession:(id)a0 didUpdateDestinations:(id)a1;
- (id)traceManager;
- (void)leaveState;
- (BOOL)requiresHighMemoryThreshold;
- (id)clParameters;

@end
