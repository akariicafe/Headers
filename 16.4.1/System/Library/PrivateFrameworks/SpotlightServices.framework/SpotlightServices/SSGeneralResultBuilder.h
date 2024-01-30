@interface SSGeneralResultBuilder : SSResultBuilder

+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildInlineCardSections;
- (id)buildSecondaryTitle;
- (id)buildSecondaryTitleImage;

@end
