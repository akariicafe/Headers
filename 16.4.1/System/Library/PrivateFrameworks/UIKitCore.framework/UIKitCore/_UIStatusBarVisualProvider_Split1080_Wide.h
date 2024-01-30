@class NSString;

@interface _UIStatusBarVisualProvider_Split1080_Wide : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)expandedEdgeInset;
+ (double)referenceScreenScale;
+ (double)leadingCenteringOffset;
+ (double)height;
+ (double)additionalBottomLeadingMargin;
+ (double)expandedFontSize;

- (double)itemSpacing;
- (double)expandedIconScale;
- (double)lowerExpandedBaselineOffset;
- (double)baselineBottomInset;
- (struct CGSize { double x0; double x1; })expandedPillSize;
- (double)bottomLeadingTopOffset;

@end
