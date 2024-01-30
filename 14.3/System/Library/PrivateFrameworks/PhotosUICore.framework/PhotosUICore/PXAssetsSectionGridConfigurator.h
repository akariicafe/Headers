@interface PXAssetsSectionGridConfigurator : PXAssetsSectionConfigurator

@property (nonatomic) long long zoomStep;
@property (nonatomic) BOOL aspectFitContent;
@property (readonly, nonatomic) BOOL supportsAspectRatioToggle;

- (long long)numberOfZoomStepsWithDataSource:(id)a0;
- (id)headerSpecForHeaderStyle:(long long)a0 assetSectionLayout:(id)a1;
- (void)configureAssetSectionLayout:(id)a0;
- (BOOL)_layoutIsAspectFit:(id)a0 forSpec:(id)a1;
- (void)_configureGridLayout:(id)a0 inSectionLayout:(id)a1;
- (struct CGSize { double x0; double x1; })estimatedSizeOfSectionForAssetCollection:(id)a0 isCurated:(BOOL)a1 numberOfAssets:(long long)a2 referenceSize:(struct CGSize { double x0; double x1; })a3;
- (BOOL)_layoutHasIndividualItems:(id)a0 forSpec:(id)a1;
- (double)_interItemSpacingForLayout:(id)a0 forSpec:(id)a1;

@end
