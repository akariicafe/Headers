@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator

@property (readonly, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec;

- (void).cxx_destruct;
- (void)configureAssetSectionLayout:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 assetsSectionLayoutSpec:(id)a1;
- (id)createCardSpecWithExtendedTraitCollection:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerInsets;

@end
