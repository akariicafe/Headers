@interface _UIContextMenuViewAccessibility : ___UIContextMenuViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (void)displayMenu:(id)a0 updateType:(unsigned long long)a1 alongsideAnimations:(id /* block */)a2;
- (BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)accessibilityScrollToVisible;

@end
