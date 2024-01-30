@class UIColor, PSCapacityBarData;

@interface PSCapacityBarView : UIView

@property (retain, nonatomic) PSCapacityBarData *barData;
@property (retain, nonatomic) UIColor *barBackgroundColor;
@property (retain, nonatomic) UIColor *barSeparatorColor;
@property (retain, nonatomic) UIColor *barOtherDataColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)bezierPathWithLineFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;

@end
