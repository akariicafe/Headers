@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)focusGroupIdentifier;
- (void)dealloc;
- (id)accessibilityHint;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingVisibleAncestor;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilitySetValue:(id)a0;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (BOOL)_accessibilityProvidesOwnFrame;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilityUsesFrameInContainerSpace;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;

@end
