@interface UIAccessibilityTextLineElement : UIAccessibilityElement {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
