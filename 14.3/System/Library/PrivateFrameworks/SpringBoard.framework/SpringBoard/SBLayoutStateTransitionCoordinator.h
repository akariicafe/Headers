@class SBLayoutStateTransitionContext, SBSceneManager, NSString, NSPointerArray;
@protocol SBLayoutStateTransitionSceneEntityFrameProvider;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate> {
    NSPointerArray *_observerPointerArray;
}

@property (readonly, weak, nonatomic) SBSceneManager *sceneManager;
@property (weak, nonatomic) id<SBLayoutStateTransitionSceneEntityFrameProvider> sceneEntityFrameProvider;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (void)beginTransitionForWorkspaceTransaction:(id)a0;
- (void)endTransitionWithError:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (void)willEndTransition;
- (id)initWithSceneManager:(id)a0;

@end
