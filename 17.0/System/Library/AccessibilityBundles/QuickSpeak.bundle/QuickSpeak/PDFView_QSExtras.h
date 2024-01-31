@interface PDFView_QSExtras : __PDFView_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilityQuickSpeakContent;
- (void)_accessibilityQuickSpeakTextRectsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 highlightRects:(id)a2 sentenceRects:(id)a3 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (id)_accessibilitySpeakTextSelectionViews;
- (void)_axConvertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toRects:(id)a1 operatingPage:(id)a2;

@end
