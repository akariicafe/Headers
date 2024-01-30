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

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_defaultSecondaryColor;
- (void)_updateColors;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
