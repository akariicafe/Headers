@interface DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollContainerView;
    void /* unknown type, empty encoding */ centeredContentView;
    void /* unknown type, empty encoding */ scrollContainerViewMinHeightConstraint;
    void /* unknown type, empty encoding */ managedViewControllerObservedScrollView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void)safeAreaInsetsDidChange;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
