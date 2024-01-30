@class NSString, SBLayoutStateTransitionCoordinator;

@interface SBWaitForSceneLayoutTransitionTransaction : SBTransaction <SBLayoutStateTransitionObserver> {
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_begin;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSceneLayoutTransitionCoordinator:(id)a0;

@end
