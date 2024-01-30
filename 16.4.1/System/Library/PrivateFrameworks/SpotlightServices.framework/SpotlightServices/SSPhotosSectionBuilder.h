@interface SSPhotosSectionBuilder : SSSectionBuilder

+ (id)supportedBundleIds;

- (long long)maxCardSections;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCollectionStyle;

@end
