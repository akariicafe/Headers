@interface SSLinksSectionBuilder : SSSectionBuilder

+ (id)supportedBundleId;

- (long long)maxCardSections;
- (id)buildCardSectionWithResult:(id)a0 resultBuilder:(id)a1;
- (id)buildCollectionStyle;
- (BOOL)useCompactRowOnMac;

@end
