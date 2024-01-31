@interface MUPDFContentViewControllerAccessibility : __MUPDFContentViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilityLoadAccessibilityInformation;
- (void)loadContentWithCompletionBlock:(id /* block */)a0;
- (void)_axHighlightPopoverDismissed;
- (void)_axHighlightPopoverPresentedForAnnotation:(id)a0 withHighlightController:(id)a1 pullFocus:(BOOL)a2;
- (id)_axAKOverlayView;

@end
