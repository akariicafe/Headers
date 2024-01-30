@interface _UIStatusBarVisualProvider_Split1080 : _UIStatusBarVisualProvider_Split1125

+ (double)referenceScreenScale;
+ (struct CGSize { double x0; double x1; })notchSize;
+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)nativeDisplayWidth;
+ (double)pillCenteringOffset;

- (double)itemSpacing;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)leadingSmallPillSpacing;
- (struct CGSize { double x0; double x1; })pillSize;
- (long long)normalIconSize;
- (double)baselineBottomInset;

@end
