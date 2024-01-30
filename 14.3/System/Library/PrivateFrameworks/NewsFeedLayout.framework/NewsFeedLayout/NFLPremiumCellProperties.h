@interface NFLPremiumCellProperties : NFLAbstractHeadlineProperties

@property (readonly, nonatomic) double accessoryLineHeight;

- (double)horizontalTextSpacing;
- (double)imageToPublisherLogoSpacing;
- (double)titleToAccessoryViewSpacingWithTemplate:(id)a0;
- (double)publisherLogoToTitleSpacingWithTemplate:(id)a0;
- (double)accessoryViewToBottom;
- (double)imageAspectRatios;
- (double)_titleTopOffsetWithTemplate:(id)a0;

@end
