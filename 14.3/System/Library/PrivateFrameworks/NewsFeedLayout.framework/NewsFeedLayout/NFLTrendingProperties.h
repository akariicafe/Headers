@interface NFLTrendingProperties : NFLAbstractHeadlineProperties

@property (readonly, nonatomic) double bylineLineHeight;

- (id)titleFontWithTemplate:(id)a0;
- (id)titleFontNameWithTemplate:(id)a0;
- (id)bylineFontWithTemplate:(id)a0;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)a0;
- (double)spacingAboveArticle;
- (double)numberedCircleTopSpacingAboveLogoWithTemplate:(id)a0;
- (double)numberedCircleTitleSpacingWithTemplate:(id)a0;
- (id)bylineFontColorWithTemplate:(id)a0;
- (double)titleToAccessorySpacingWithTemplate:(id)a0;
- (double)_titleTopOffsetWithTemplate:(id)a0;
- (double)ageLabelToAccessoryLabelSpacingWithTemplate:(id)a0;
- (double)_bylineTopOffsetWithTemplate:(id)a0;
- (double)_bylineFontSize;
- (double)titleFontSizeWithTemplate:(id)a0;
- (id)_bylineFontNameWithTemplate:(id)a0;

@end
