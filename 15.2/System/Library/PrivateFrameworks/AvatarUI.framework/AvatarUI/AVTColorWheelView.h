@class NSArray, UIView;

@interface AVTColorWheelView : AVTAttributeValueView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSArray *circleViews;

+ (id)buildCircleViewWithDiameter:(double)a0;
+ (BOOL)colorItems:(id)a0 containColorItem:(id)a1;
+ (id)colorItemsFrom:(id)a0 excluding:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)buildAllCircleViews;
- (struct CGPoint { double x0; double x1; })rotatePoint:(struct CGPoint { double x0; double x1; })a0 aroundCenter:(struct CGPoint { double x0; double x1; })a1 withAngle:(double)a2;
- (void)updateWithPrimaryItems:(id)a0 extendedItems:(id)a1;

@end
