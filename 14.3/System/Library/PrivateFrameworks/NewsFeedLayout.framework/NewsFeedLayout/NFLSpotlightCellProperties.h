@interface NFLSpotlightCellProperties : NFLAbstractHeadlineProperties

@property (readonly, nonatomic) double accessoryLineHeight;

- (id)titleFont;
- (long long)numberOfSegments;
- (double)titleFontSize;
- (double)imageAspectRatio;
- (id)accessoryFont;
- (double)horizontalTextSpacing;
- (double)titleToAccessoryViewSpacingWithTemplate:(id)a0;
- (double)imageToTitleSpacing;
- (double)titleToExcerptSpacing;
- (double)excerptToAccessorySpacing;
- (double)titleRightMargin;
- (double)accessoryViewToBottomSpacing;
- (double)_titleTopOffsetWithTemplate:(id)a0;

@end
