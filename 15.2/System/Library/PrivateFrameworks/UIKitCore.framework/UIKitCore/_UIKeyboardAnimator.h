@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject {
    _UIKeyboardAnimatorAnimationStyle *_style;
}

- (void).cxx_destruct;
- (id)init;
- (void)runAnimationWithState:(id)a0;
- (void)applyToKeyboardOperations:(id /* block */)a0;
- (void)prepareForAnimationWithState:(id)a0;
- (void)performAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 onCompletion:(id /* block */)a2;
- (void)completeAnimationWithState:(id)a0;

@end
