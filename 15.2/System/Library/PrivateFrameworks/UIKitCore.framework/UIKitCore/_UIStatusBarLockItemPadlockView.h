@class UIImageView, UIStatusBarLockItemView, NSString;

@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *bodyView;
@property (retain, nonatomic) UIImageView *shackleView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) UIStatusBarLockItemView *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 owner:(id)a1;
- (void)animateUnlockCompletionBlock:(id /* block */)a0;
- (void)jiggleCompletionBlock:(id /* block */)a0;
- (void)reset;

@end
