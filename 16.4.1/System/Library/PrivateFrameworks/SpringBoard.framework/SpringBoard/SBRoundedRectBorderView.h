@class UIColor;

@interface SBRoundedRectBorderView : UIView

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;

- (id)borderColor;
- (double)borderWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBorderColor:(id)a0;
- (double)cornerRadius;
- (void)setBorderWidth:(double)a0;
- (void)setCornerRadius:(double)a0;

@end
