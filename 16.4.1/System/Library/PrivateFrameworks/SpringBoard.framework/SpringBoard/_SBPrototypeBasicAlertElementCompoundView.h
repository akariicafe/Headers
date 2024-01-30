@class UIImage, UIImageView;

@interface _SBPrototypeBasicAlertElementCompoundView : UIView {
    UIImageView *_leadingImageView;
    UIImageView *_trailingImageView;
}

@property (copy, nonatomic) UIImage *leadingImage;
@property (copy, nonatomic) UIImage *trailingImage;
@property (nonatomic) unsigned long long layoutAxis;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
