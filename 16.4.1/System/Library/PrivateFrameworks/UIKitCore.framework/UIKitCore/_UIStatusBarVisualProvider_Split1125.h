@class NSString;

@interface _UIStatusBarVisualProvider_Split1125 : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)expandedEdgeInset;
+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)LTEAPlusFontSize;
+ (double)baseFontSize;
+ (double)additionalBottomLeadingMargin;
+ (double)pillCenteringOffset;
+ (double)pillFontSize;

- (double)itemSpacing;
- (double)expandedIconScale;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)leadingSmallPillSpacing;
- (double)leadingItemSpacing;
- (double)normalIconScale;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })pillSize;
- (struct CGSize { double x0; double x1; })expandedPillSize;

@end
