@class UIImageView;

@interface HUCheckmarkAccessoryView : UIView

@property (retain, nonatomic) UIImageView *checkmarkImageView;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL disabled;

+ (double)borderWidth;
+ (id)grayBorderColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_updateColors;
- (void)tintColorDidChange;

@end
