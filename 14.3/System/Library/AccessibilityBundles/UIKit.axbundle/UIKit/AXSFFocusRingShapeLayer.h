@class CAShapeLayer;

@interface AXSFFocusRingShapeLayer : CAShapeLayer

@property (retain, nonatomic) CAShapeLayer *innerBorder;
@property (retain, nonatomic) CAShapeLayer *outerBorder;

+ (id)layer;
+ (id)focusLayerForUserInterfaceStyle:(long long)a0;
+ (id)parentLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)a0;

- (void).cxx_destruct;
- (void)setPath:(struct CGPath { } *)a0;

@end
