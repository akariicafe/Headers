@interface _UIStatusBarVisualProvider_RoundedPad : _UIStatusBarVisualProvider_Pad

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })regionCursorInsets;
+ (BOOL)regionCursorIsPill;
+ (double)height;
+ (double)baselineOffset;
+ (double)cornerRadius;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)pillSmallFont;
- (id)pillFont;
- (struct CGSize { double x0; double x1; })pillSize;

@end
