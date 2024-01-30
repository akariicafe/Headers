@class PKTableHeaderView, UIScrollView, UIButton;

@interface PKCameraCaptureInstructionView : UIView {
    long long _context;
    UIScrollView *_scrollView;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
}

@property (retain, nonatomic) PKTableHeaderView *headerView;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setPrimaryButtonTitle:(id)a0;
- (void)setSecondaryButtonTitle:(id)a0;
- (void)setPrimaryButtonEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1 primaryAction:(id)a2 primaryActionTitle:(id)a3 secondaryAction:(id)a4 secondaryActionTitle:(id)a5;
- (void)setPrimaryButtonHidden:(BOOL)a0;
- (void)removeSecondaryButton;
- (void)setupScrollView;
- (void)setupPrimaryButtonWithTitle:(id)a0 action:(id)a1;
- (void)setupSecondaryButtonWithTitle:(id)a0 action:(id)a1;
- (void)setupHeaderView;
- (BOOL)isBuddyiPad;
- (BOOL)hasSecondaryButton;

@end
