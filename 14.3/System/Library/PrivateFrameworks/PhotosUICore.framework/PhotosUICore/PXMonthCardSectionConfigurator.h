@class PXMonthsAssetsSectionHeaderLayoutSpec;

@interface PXMonthCardSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXMonthsAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
}

+ (long long)zoomLevel;

- (void).cxx_destruct;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (void)configureAssetSectionLayout:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (id)createCardSpecWithExtendedTraitCollection:(id)a0;

@end
