@interface WKAccessibilityWebPageObjectAccessibility : __WKAccessibilityWebPageObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)init;
- (void)dealloc;
- (id)accessibilityElements;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setRemoteTokenData:(id)a0;
- (void)_accessibilityCategoryInstalled:(id)a0;
- (id)accessibilityContainer;
- (void)_enableCaching;
- (id)_accessibilityApplication;
- (int)_accessibilityHostPid;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityResponderElement;
- (id)_accessibilityResponderElementForFocus;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (void)_axRemoteElementRegistered:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityClippingFrame;
- (void)_disableCaching;
- (void *)_axCachedRootObject;
- (void)_axListenForRemoteElement;
- (void)_axSetCachedRootObject:(id)a0;
- (id)_axUnarchivedTokenForData:(id)a0;
- (void)_initializeRemoteElement:(id)a0;
- (void)_initializeRootIfNecessary;

@end
