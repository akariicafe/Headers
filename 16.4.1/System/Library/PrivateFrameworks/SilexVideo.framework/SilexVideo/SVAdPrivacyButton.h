@interface SVAdPrivacyButton : SVButton

+ (id)font;
+ (double)height;
+ (struct CGSize { double x0; double x1; })size;
+ (id)title;

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;

@end
