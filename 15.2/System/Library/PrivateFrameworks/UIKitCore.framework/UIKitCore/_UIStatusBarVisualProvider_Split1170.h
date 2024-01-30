@class NSString;

@interface _UIStatusBarVisualProvider_Split1170 : _UIStatusBarVisualProvider_Split <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)bottomLeadingTopOffset;
+ (double)expandedFontSize;
+ (double)pillCenteringOffset;
+ (double)LTEAPlusFontSize;
+ (double)baseFontSize;
+ (double)pillFontSize;

- (double)leadingItemSpacing;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (double)leadingSmallPillSpacing;
- (double)normalIconScale;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)expandedIconScale;
- (double)itemSpacing;

@end
