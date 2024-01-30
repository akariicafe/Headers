@class NSString;

@interface _UIStatusBarVisualProvider_Split1242 : _UIStatusBarVisualProvider_Split <_UIStatusBarVisualProvider_CustomSplit>

@property (class, readonly) struct CGSize { double x0; double x1; } notchSize;
@property (class, readonly) double nativeDisplayWidth;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)pillCenteringOffset;
+ (double)additionalBottomLeadingMargin;
+ (double)trailingEdgeInsetLeadingAdjustment;
+ (BOOL)shrinksSingleCharacterTypes;
+ (double)height;
+ (double)baseFontSize;

- (double)lowerExpandedBaselineOffset;
- (double)normalIconScale;
- (struct CGSize { double x0; double x1; })pillSize;
- (double)expandedIconScale;
- (double)itemSpacing;

@end
