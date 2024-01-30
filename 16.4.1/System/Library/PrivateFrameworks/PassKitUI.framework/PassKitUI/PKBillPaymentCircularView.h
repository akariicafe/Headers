@class UIColor, UIImageView, UIImage, UIView;

@interface PKBillPaymentCircularView : UIView {
    UIView *_primaryView;
    UIView *_secondaryView;
    UIImageView *_imageView;
    UIColor *_primaryColor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _shadowFrame;
}

@property (copy, nonatomic) UIColor *primaryColor;
@property (copy, nonatomic) UIColor *secondaryColor;
@property (retain, nonatomic) UIImage *image;

- (void)_updateColors;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (id)_defaultSecondaryColor;

@end
