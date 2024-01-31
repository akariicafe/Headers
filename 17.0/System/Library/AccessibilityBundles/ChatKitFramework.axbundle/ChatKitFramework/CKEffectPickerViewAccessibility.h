@interface CKEffectPickerViewAccessibility : __CKEffectPickerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)accessibilityViewIsModal;
- (void)_touchUpInsideDotButton:(id)a0;
- (void)addEffect:(id)a0 withDescriptiveText:(id)a1 withIdentifier:(id)a2;
- (void)cancelImpactSelection;
- (void)effectTypeDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sendButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 balloonViewOrigin:(struct CGPoint { double x0; double x1; })a2 composition:(id)a3 color:(char)a4;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_axFullScreenEffectElement;
- (void)_axUpdateCloseButton;
- (void)_axUpdateScrollView;
- (void)_setAXFullScreenEffectElement:(id)a0;

@end
