@class NSString;

@interface _UIStatusBarVisualProvider_Split1080_Wide : _UIStatusBarVisualProvider_Split <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)expandedFontSize;
+ (double)leadingCenteringOffset;
+ (double)referenceScaleForScreen:(id)a0;
+ (double)additionalBottomLeadingMargin;
+ (double)expandedEdgeInset;
+ (double)height;

- (double)bottomLeadingTopOffset;
- (double)lowerExpandedBaselineOffset;
- (double)expandedIconScale;
- (double)baselineBottomInset;
- (double)itemSpacing;

@end
