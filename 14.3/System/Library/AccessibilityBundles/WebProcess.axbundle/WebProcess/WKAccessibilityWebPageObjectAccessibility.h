@interface WKAccessibilityWebPageObjectAccessibility : __WKAccessibilityWebPageObjectAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (id)init;
- (id)_accessibilityResponderElementForFocus;
- (void)dealloc;
- (void)setRemoteTokenData:(id)a0;
- (id)_accessibilityResponderElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)_enableCaching;
- (id)accessibilityContainer;
- (void)_accessibilityCategoryInstalled:(id)a0;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityApplication;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (void)_axListenForRemoteElement;
- (void)_axRemoteElementRegistered:(id)a0;
- (void)_initializeRootIfNecessary;
- (void *)_axCachedRootObject;
- (void)_axSetCachedRootObject:(id)a0;
- (id)_axUnarchivedTokenForData:(id)a0;
- (void)_initializeRemoteElement:(id)a0;
- (void)_disableCaching;

@end
