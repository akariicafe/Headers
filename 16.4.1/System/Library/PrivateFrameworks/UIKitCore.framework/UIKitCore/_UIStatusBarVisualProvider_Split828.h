@class NSString;

@interface _UIStatusBarVisualProvider_Split828 : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)LTEAPlusFontSize;
+ (double)leadingSmallPillSpacing;
+ (double)baseFontSize;
+ (double)additionalBottomLeadingMargin;
+ (double)pillCenteringOffset;
+ (BOOL)shrinksSingleCharacterTypes;

- (double)itemSpacing;
- (double)expandedIconScale;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)leadingItemSpacing;
- (double)normalIconScale;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)baselineBottomInset;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (double)bottomLeadingTopOffset;
- (double)condensedPointSizeForCellularType:(long long)a0 defaultPointSize:(double)a1 baselineOffset:(double *)a2;

@end
