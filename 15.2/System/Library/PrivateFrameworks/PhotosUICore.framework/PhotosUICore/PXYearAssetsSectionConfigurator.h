@class PXYearAssetsSkimmingSectionHeaderLayoutSpec, PXYearAssetsSectionHeaderLayoutSpec;

@interface PXYearAssetsSectionConfigurator : PXCuratedLibraryCardSectionConfigurator {
    PXYearAssetsSkimmingSectionHeaderLayoutSpec *_skimmingHeaderSpec;
    PXYearAssetsSectionHeaderLayoutSpec *_normalHeaderSpec;
}

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (id)createCardSpecWithExtendedTraitCollection:(id)a0;
- (void)configureAssetSectionLayout:(id)a0;

@end
