@interface UITextEffectsWindowAccessibility : __UITextEffectsWindowAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)_accessibilityCanBeConsideredAsMainWindow;
- (BOOL)accessibilityViewIsModal;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_axHasModalView;

@end
