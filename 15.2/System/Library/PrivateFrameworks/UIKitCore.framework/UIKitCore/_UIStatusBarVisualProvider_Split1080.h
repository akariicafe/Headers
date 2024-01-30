@interface _UIStatusBarVisualProvider_Split1080 : _UIStatusBarVisualProvider_Split1125

+ (struct CGSize { double x0; double x1; })notchSize;
+ (double)nativeDisplayWidth;
+ (double)leadingCenteringOffset;
+ (double)pillCenteringOffset;
+ (double)referenceScaleForScreen:(id)a0;
+ (double)height;

- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)leadingSmallPillSpacing;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (long long)normalIconSize;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)baselineBottomInset;
- (double)itemSpacing;

@end
