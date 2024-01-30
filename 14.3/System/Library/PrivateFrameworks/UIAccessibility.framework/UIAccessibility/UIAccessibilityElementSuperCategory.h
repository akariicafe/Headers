@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (id)_axGetStoredDefaultFocusGroupDescriptor;
- (void)_axSetStoredDefaultFocusGroupDescriptor:(id)a0;
- (id)init;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilitySupportsHandwriting;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityPath;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySetNativeFocus;
- (id)description;
- (BOOL)_accessibilityUsesFrameInContainerSpace;
- (BOOL)_accessibilityProvidesOwnFrame;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)_accessibilitySetValue:(id)a0;
- (id)initWithAccessibilityContainer:(id)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityLanguage;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)_focusGroupDescriptor;
- (id)accessibilityHint;
- (id)_accessibilityUserTestingVisibleAncestor;
- (id)accessibilityValue;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;

@end
