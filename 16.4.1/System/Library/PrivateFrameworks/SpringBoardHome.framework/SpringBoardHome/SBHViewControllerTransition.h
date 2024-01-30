@class NSString, SBViewControllerTransitionContext;
@protocol SBHViewControllerTransitionDelegate;

@interface SBHViewControllerTransition : NSObject <SBViewControllerTransitionContextDelegate, SBHViewControllerTransitionAnimationContext, BSDescriptionProviding>

@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
@property (nonatomic) long long transitionEndpoint;
@property (weak, nonatomic) id<SBHViewControllerTransitionDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsAnimation;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic) long long targetEndpoint;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)transitionDidFinish:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)_handleDidProgressToEndState;
- (void)_handleDidReturnToBeginningState;
- (id)_newTransitionAnimator;
- (void)progressToEndStateWithAnimation:(BOOL)a0;
- (void)returnToBeginningStateWithAnimation:(BOOL)a0;
- (void)transitionToEndpoint:(long long)a0 withAnimation:(BOOL)a1;

@end
