@interface SXAdPrivacyButton : SVButton

+ (id)font;
+ (struct CGSize { double x0; double x1; })size;
+ (double)height;
+ (id)title;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
