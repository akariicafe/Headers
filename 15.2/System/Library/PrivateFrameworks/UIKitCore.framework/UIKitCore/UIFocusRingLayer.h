@interface UIFocusRingLayer : CAShapeLayer

+ (id)focusLayerForUserInterfaceStyle:(long long)a0;
+ (id)parentLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedLayerForUserInterfaceStyle:(long long)a0;
+ (id)selectedParentLayerForUserInterfaceStyle:(long long)a0;

- (void)_updateWithTintColor:(id)a0;

@end
