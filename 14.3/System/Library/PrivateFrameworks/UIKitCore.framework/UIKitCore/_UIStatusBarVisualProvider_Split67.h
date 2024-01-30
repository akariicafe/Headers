@interface _UIStatusBarVisualProvider_Split67 : _UIStatusBarVisualProvider_Split

+ (double)itemSpacing;
+ (double)cornerRadius;
+ (struct CGSize { double x0; double x1; })pillSize;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })expandedEdgeInsets;
+ (id)normalFont;
+ (double)height;
+ (id)pillSmallFont;
+ (double)nativeDisplayWidth;
+ (double)normalIconScale;
+ (double)leadingCenteringEdgeInset;
+ (double)expandedIconScale;
+ (double)baselineBottomInset;
+ (double)leadingItemSpacing;
+ (struct CGSize { double x0; double x1; })notchSize;
+ (double)pillCenteringEdgeInset;
+ (id)systemUpdateFont;
+ (double)bottomLeadingSpace;
+ (double)bottomLeadingBaseline;
+ (double)bottomLeadingWidth;
+ (double)leadingSmallPillSpacing;
+ (BOOL)supportsAnimatedCellularNetworkType;
+ (double)condensedPointSizeForCellularType:(long long)a0 defaultPointSize:(double)a1 baselineOffset:(double *)a2;
+ (double)lowerExpandedBaselineOffset;
+ (double)bottomLeadingTopOffset;
+ (id)pillFont;
+ (struct CGSize { double x0; double x1; })smallPillSize;
+ (id)emphasizedFont;
+ (id)expandedFont;

- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;

@end
