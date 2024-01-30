@class NSString;

@interface _UIStatusBarVisualProvider_Split828 : _UIStatusBarVisualProvider_Split <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)leadingSmallPillSpacing;
+ (double)leadingCenteringOffset;
+ (double)pillCenteringOffset;
+ (double)additionalBottomLeadingMargin;
+ (BOOL)shrinksSingleCharacterTypes;
+ (double)LTEAPlusFontSize;
+ (double)height;
+ (double)baseFontSize;

- (double)leadingItemSpacing;
- (double)bottomLeadingTopOffset;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)normalIconScale;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (double)condensedPointSizeForCellularType:(long long)a0 defaultPointSize:(double)a1 baselineOffset:(double *)a2;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)expandedIconScale;
- (double)baselineBottomInset;
- (double)itemSpacing;

@end
