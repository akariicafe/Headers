@interface FBApplicationProcessAccessibility : __FBApplicationProcessAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_bootstrapAndExec;
- (void)_setSceneLifecycleState:(unsigned char)a0;
- (void)_accessibilitySetWasJustLaunched:(BOOL)a0;
- (BOOL)_accessibilityWasJustLaunched;

@end
