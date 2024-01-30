@class BSAnimationSettings;
@protocol SBPasscodeKeyboardAnimatorDelegate;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (weak, nonatomic) id<SBPasscodeKeyboardAnimatorDelegate> delegate;

- (void).cxx_destruct;
- (void)completeAnimationWithState:(id)a0;
- (void)performAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 onCompletion:(id /* block */)a2;
- (void)prepareForAnimationWithState:(id)a0;
- (void)runAnimationWithState:(id)a0;

@end
