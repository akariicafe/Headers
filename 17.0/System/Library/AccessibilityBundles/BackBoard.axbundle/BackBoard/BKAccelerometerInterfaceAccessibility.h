@interface BKAccelerometerInterfaceAccessibility : __BKAccelerometerInterfaceAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)processEvent:(inout struct __IOHIDEvent **)a0 sender:(id)a1 dispatcher:(id)a2;
- (void)orientationManager:(id)a0 deviceOrientationMayHaveChanged:(long long)a1 changeSource:(long long)a2 isDeviceOrientationLocked:(BOOL)a3;

@end
