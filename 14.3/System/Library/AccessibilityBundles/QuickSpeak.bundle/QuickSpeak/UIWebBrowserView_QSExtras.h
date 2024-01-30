@interface UIWebBrowserView_QSExtras : __UIWebBrowserView_QSExtras_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_accessibilityTextRectsForRange:(id)a0 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 selectedRange:(id)a2 string:(id)a3;
- (id)_accessibilitySearchTextRangeFromRange:(id)a0 withString:(id)a1 selectedRange:(id)a2;
- (BOOL)_rangeStringMatch:(id)a0 wordText:(id)a1;
- (id)_adjustedRange:(id)a0 withText:(id)a1 matchText:(id)a2 initiator:(id)a3;

@end
