@class NSString;

@interface AXVKCImageTextSelectionViewAccessibilityElement : UIAccessibilityElement

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) NSString *_accessibilityContent;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithAccessibilityContainer:(id)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
