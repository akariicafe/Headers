@interface NFLAbstractHeadlineProperties : NFLAbstractCellProperties

@property (readonly, nonatomic) double accessoryViewToSharrowPadding;
@property (readonly, nonatomic) double extraYOffsetForSharrow;
@property (readonly, nonatomic) double sharrowHeight;
@property (readonly, nonatomic) double sharrowWidth;

- (long long)rowSpan;
- (double)publisherLogoHeight;
- (id)titleFontWithTemplate:(id)a0;
- (id)titleFontNameWithTemplate:(id)a0;
- (double)titleLineHeightWithTemplate:(id)a0 font:(id)a1;
- (id)bylineFontWithTemplate:(id)a0;
- (id)bylineFontNameWithTemplate:(id)a0;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)a0;
- (id)bylineFontColorWithTemplate:(id)a0;
- (double)titleToAccessorySpacingWithTemplate:(id)a0;
- (double)imageToTitleSpacing;
- (double)titleToExcerptSpacing;
- (double)excerptToAccessorySpacing;
- (double)accessoryViewToBottomSpacing;
- (double)_titleTopOffsetWithTemplate:(id)a0;
- (double)ageLabelToAccessoryLabelSpacingWithTemplate:(id)a0;
- (id)excerptFontWithTemplate:(id)a0;
- (id)excerptFontNameWithTemplate:(id)a0;
- (double)excerptLineHeightWithTemplate:(id)a0 font:(id)a1;
- (BOOL)allowsExcerpt;
- (BOOL)allowsExcerptInForYou;
- (double)_excerptTopOffsetWithTemplate:(id)a0;
- (double)_bylineTopOffsetWithTemplate:(id)a0;
- (double)_titleFontSizeWithTemplate:(id)a0;
- (double)_excerptFontSizeWithTemplate:(id)a0;
- (double)_bylineFontSize;
- (BOOL)allowsExcerptWithFeedSettings:(id)a0;
- (double)titleToExcerptSpacingWithTemplate:(id)a0;
- (double)segmentViewHeight;
- (double)excerptToAccessorySpacingWithTemplate:(id)a0;

@end
