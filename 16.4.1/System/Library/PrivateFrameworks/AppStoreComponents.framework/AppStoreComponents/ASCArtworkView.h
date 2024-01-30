@class ASCScreenshotDisplayConfiguration, NSString, UIImageView, UIImage, UIColor, UIView, ASCBorderView;

@interface ASCArtworkView : UIView

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) ASCBorderView *borderView;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) NSString *decoration;
@property (copy, nonatomic) ASCScreenshotDisplayConfiguration *screenshotDisplayConfiguration;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIView *overlayView;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)description;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (id)cornerCurveForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)cornerMaskForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cornerRadiusForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDataChanged;

@end
