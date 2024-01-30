@interface UIAutocorrectInlinePromptAccessibility : __UIAutocorrectInlinePromptAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)setCorrection:(id)a0 typedText:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3;

@end
