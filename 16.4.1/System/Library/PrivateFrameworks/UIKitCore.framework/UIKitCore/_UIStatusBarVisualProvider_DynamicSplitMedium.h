@interface _UIStatusBarVisualProvider_DynamicSplitMedium : _UIStatusBarVisualProvider_DynamicSplit

+ (double)baseFontSize;
+ (double)expandedFontSize;

- (double)expandedIconScale;
- (double)normalIconScale;
- (double)lowerExpandedBaselineOffset;
- (double)bottomLeadingTopOffset;
- (id)leadingItemCutoffWidths;
- (id)trailingItemCutoffWidths;

@end
