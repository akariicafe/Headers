@class CAShapeLayer;

@interface AXSFFocusRingShapeLayer : CAShapeLayer {
    CAShapeLayer *_innerBorder;
    CAShapeLayer *_outerBorder;
}

+ (id)layer;
+ (id)focusLayerForUserInterfaceStyle:(long long)a0;
+ (id)parentLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)a0;

- (void)setPath:(struct CGPath { } *)a0;
- (void).cxx_destruct;

@end
