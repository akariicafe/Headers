@interface SSGeneralResultBuilder : SSResultBuilder

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)buildDetailedRowCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSections;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;
- (id)buildFootnote;

@end
