@class UIColor;

@interface SKUIDividerView : UIView

@property (retain, nonatomic) UIColor *dividerColor;
@property (nonatomic) long long dividerOrientation;
@property (nonatomic) double dividerSize;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;

@end
