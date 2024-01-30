@interface _UIStatusBarVisualProvider_Split65 : _UIStatusBarVisualProvider_Split

+ (double)itemSpacing;
+ (struct CGSize { double x0; double x1; })pillSize;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })expandedEdgeInsets;
+ (id)normalFont;
+ (id)pillSmallFont;
+ (double)nativeDisplayWidth;
+ (double)normalIconScale;
+ (double)leadingCenteringEdgeInset;
+ (double)expandedIconScale;
+ (double)baselineBottomInset;
+ (double)leadingItemSpacing;
+ (struct CGSize { double x0; double x1; })notchSize;
+ (double)pillCenteringEdgeInset;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })trailingEdgeInsets;
+ (id)systemUpdateFont;
+ (double)bottomLeadingWidth;
+ (double)leadingSmallPillSpacing;
+ (double)condensedPointSizeForCellularType:(long long)a0 defaultPointSize:(double)a1 baselineOffset:(double *)a2;
+ (double)lowerExpandedBaselineOffset;
+ (id)pillFont;
+ (struct CGSize { double x0; double x1; })smallPillSize;
+ (id)emphasizedFont;
+ (id)expandedFont;

- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;

@end
