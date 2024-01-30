@interface UIProgressHUDAccessibility : __UIProgressHUDAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityViewIsModal;
- (void)showInView:(id)a0;
- (BOOL)_accessibilityBlocksInteraction;

@end
