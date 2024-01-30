@interface WKAccessibilityWebPageObjectAccessibility : __WKAccessibilityWebPageObjectAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setRemoteTokenData:(id)a0;
- (void)_accessibilityCategoryInstalled:(id)a0;
- (void)_enableCaching;
- (id)accessibilityContainer;
- (id)init;
- (id)accessibilityElements;
- (void)dealloc;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityApplication;
- (id)_accessibilityResponderElementForFocus;
- (id)_accessibilityResponderElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityRemoteSubstituteChildren:(id)a0;
- (void)_axRemoteElementRegistered:(id)a0;
- (void)_initializeRootIfNecessary;
- (void *)_axCachedRootObject;
- (void)_axSetCachedRootObject:(id)a0;
- (id)_axUnarchivedTokenForData:(id)a0;
- (void)_axListenForRemoteElement;
- (void)_initializeRemoteElement:(id)a0;
- (void)_disableCaching;

@end
