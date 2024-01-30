@class UIButton, PKTableHeaderView, UIScrollView;

@interface PKCameraCaptureInstructionView : UIView {
    long long _context;
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) UIButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;
@property (retain, nonatomic) PKTableHeaderView *headerView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)isBuddyiPad;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
