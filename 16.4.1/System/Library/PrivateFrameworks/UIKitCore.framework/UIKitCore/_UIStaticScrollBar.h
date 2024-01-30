@class NSInvocation, NSArray, UIScrollView, UIView, UIButton;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory> {
    UIView *_dividerLine;
    NSInvocation *_invocation;
    NSArray *_constraints;
}

@property (readonly, nonatomic) UIButton *upButton;
@property (readonly, nonatomic) UIButton *downButton;
@property (nonatomic) BOOL shouldInsetButtonsForIndex;
@property (readonly, nonatomic) long long desiredAccessoryEdge;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long edge;
@property (readonly, nonatomic) BOOL overlay;

- (void)buttonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (unsigned long long)_axis;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centeringBounds;
- (id)_constraintsForEdge:(long long)a0;
- (void)_setupSubviewsIfNeeded;

@end
