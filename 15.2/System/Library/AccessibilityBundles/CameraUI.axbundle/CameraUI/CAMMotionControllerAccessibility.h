@interface CAMMotionControllerAccessibility : __CAMMotionControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)_handleLevelMotionUpdate:(id)a0 error:(id)a1;
- (void)_axDoMotionUpdate:(id)a0;
- (id)_axInternalMotionManagerQueue;
- (void)_axSetInternalMotionManagerQueue:(id)a0;
- (id)_axInternalMotionManager;
- (void)_axSetInternalMotionManager:(id)a0;
- (void)axStartInternalMotionManagerIfNecessary;
- (void)axStopInternalMotionManager;

@end
