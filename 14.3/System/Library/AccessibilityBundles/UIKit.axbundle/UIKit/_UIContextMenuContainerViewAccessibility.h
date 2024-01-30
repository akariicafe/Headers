@interface _UIContextMenuContainerViewAccessibility : ___UIContextMenuContainerViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;
- (BOOL)accessibilityViewIsModal;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)a0;
- (BOOL)accessibilityScrollDownPage;
- (id)_axPanController;
- (id)_axDetentsForPanController:(id)a0;
- (unsigned long long)_axCurrentDetentIndexForPanController:(id)a0;
- (struct CGPoint { double x0; double x1; })_axTranslationForDetentIndex:(long long)a0 currentDetentIndex:(unsigned long long)a1 detents:(id)a2;
- (void)_axApplyTranslation:(struct CGPoint { double x0; double x1; })a0 forDetentIndex:(long long)a1 panController:(id)a2;

@end
