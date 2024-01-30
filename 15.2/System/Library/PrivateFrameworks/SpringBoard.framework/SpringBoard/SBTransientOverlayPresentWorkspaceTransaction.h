@class NSString, SBUIAnimationController, FBDisplayLayoutTransition;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBUIAnimationController *_animation;
    FBDisplayLayoutTransition *_layoutTransition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canBeInterrupted;
- (id)initWithTransitionRequest:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_begin;
- (void)_didComplete;
- (void)_willBegin;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (void)_willInterruptWithReason:(id)a0;
- (void)_performStandardPresentationAnimated:(BOOL)a0;

@end
