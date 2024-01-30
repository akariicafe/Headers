@class NSString;

@interface _UIStatusBarVisualProvider_Split1242 : _UIStatusBarVisualProvider_FixedSplit <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (double)baseFontSize;
+ (double)additionalBottomLeadingMargin;
+ (double)pillCenteringOffset;
+ (BOOL)shrinksSingleCharacterTypes;
+ (double)trailingEdgeInsetLeadingAdjustment;

- (double)itemSpacing;
- (double)expandedIconScale;
- (double)normalIconScale;
- (double)lowerExpandedBaselineOffset;
- (struct CGSize { double x0; double x1; })pillSize;
- (struct CGSize { double x0; double x1; })expandedPillSize;

@end
