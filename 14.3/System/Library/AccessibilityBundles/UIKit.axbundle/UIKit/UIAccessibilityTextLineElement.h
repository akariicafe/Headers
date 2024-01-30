@interface UIAccessibilityTextLineElement : UIAccessibilityElement

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBounds;

- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityHint;
- (id)accessibilityValue;

@end
