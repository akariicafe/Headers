@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject {
    _UIKeyboardAnimatorAnimationStyle *_style;
}

- (id)init;
- (void).cxx_destruct;
- (void)applyToKeyboardOperations:(id /* block */)a0;
- (void)completeAnimationWithState:(id)a0;
- (void)performAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 onCompletion:(id /* block */)a2;
- (void)prepareForAnimationWithState:(id)a0;
- (void)runAnimationWithState:(id)a0;

@end
