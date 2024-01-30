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

- (unsigned long long)_axis;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)updateConstraints;
- (void)_setupSubviewsIfNeeded;
- (id)_constraintsForEdge:(long long)a0;
- (void)update;
- (void)buttonTapped:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centeringBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
