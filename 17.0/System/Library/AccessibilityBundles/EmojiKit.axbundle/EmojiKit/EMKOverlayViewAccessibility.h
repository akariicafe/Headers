@interface EMKOverlayViewAccessibility : __EMKOverlayViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityViewIsModal;
- (id)initWithView:(id)a0 anchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 emojiTokenList:(id)a2 selectionHandler:(id /* block */)a3;
- (void)setView:(id)a0 anchorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
