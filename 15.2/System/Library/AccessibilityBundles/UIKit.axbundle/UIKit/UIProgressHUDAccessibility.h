@interface UIProgressHUDAccessibility : __UIProgressHUDAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)showInView:(id)a0;
- (BOOL)accessibilityViewIsModal;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)_accessibilityBlocksInteraction;

@end
