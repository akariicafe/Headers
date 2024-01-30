@class NSString, SBUIAnimationController;
@protocol BSInvalidatable;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBUIAnimationController *_animation;
    id<BSInvalidatable> _displayLayoutTransitionAssertion;
    id<BSInvalidatable> _eventBufferingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransitionRequest:(id)a0;
- (void)_begin;
- (void)_willInterruptWithReason:(id)a0;
- (void)_logForInterruptAttemptReason:(id)a0;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_willBegin;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (void).cxx_destruct;
- (void)_performStandardPresentationAnimated:(BOOL)a0;

@end
