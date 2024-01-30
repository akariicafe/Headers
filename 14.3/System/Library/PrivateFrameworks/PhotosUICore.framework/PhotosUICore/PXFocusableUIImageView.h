@class UIView;

@interface PXFocusableUIImageView : UIImageView {
    UIView *_overlayView;
}

@property (nonatomic) BOOL allowsFocus;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
