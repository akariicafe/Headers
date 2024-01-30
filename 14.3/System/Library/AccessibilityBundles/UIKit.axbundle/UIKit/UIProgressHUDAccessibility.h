@interface UIProgressHUDAccessibility : __UIProgressHUDAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (BOOL)isAccessibilityElement;
- (void)showInView:(id)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityViewIsModal;
- (BOOL)_accessibilityBlocksInteraction;

@end
