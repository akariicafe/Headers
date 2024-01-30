@interface _UIStatusBarVisualProvider_RoundedPad : _UIStatusBarVisualProvider_Pad

+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
+ (double)height;
+ (double)cornerRadius;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })regionCursorInsets;
+ (BOOL)regionCursorIsPill;

- (struct CGSize { double x0; double x1; })smallPillSize;
- (struct CGSize { double x0; double x1; })pillSize;
- (id)pillFont;
- (id)pillSmallFont;

@end
