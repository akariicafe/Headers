@class UIImage, UIColor;

@interface CNTransportButton : UIButton

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long transportType;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (retain, nonatomic) UIColor *glyphColor;

+ (id)transportButton;
+ (id)transportButtonWithType:(long long)a0;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateImageWithType:(long long)a0;
- (void)_updateTouchInsetsToFillContainerWithSize:(struct CGSize { double x0; double x1; })a0;

@end
