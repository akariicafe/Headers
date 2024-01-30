@class _UIKeyboardAnimator;
@protocol UIInputViewAnimationHost;

@interface _UIKeyboardAnimatorAnimationStyle : UIInputViewAnimationStyle {
    _UIKeyboardAnimator *_animator;
    id<UIInputViewAnimationHost> _currentHost;
    BOOL _currentFromPosition;
}

+ (id)animationStyleWithAnimator:(id)a0;

- (void)launchAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 completion:(id /* block */)a2 forHost:(id)a3 fromCurrentPosition:(BOOL)a4;
- (id)controllerForStartPlacement:(id)a0 endPlacement:(id)a1;
- (void).cxx_destruct;
- (void)defaultLaunchAnimation:(id /* block */)a0 afterStarted:(id /* block */)a1 completion:(id /* block */)a2;

@end
