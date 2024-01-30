@class NSNumber, NSDictionary, PFSceneTaxonomy;

@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController {
    PFSceneTaxonomy *_sceneTaxonomy;
}

@property (retain, nonatomic) NSNumber *sceneIdentifier;
@property (copy, nonatomic) NSDictionary *assetsHighestConfidence;

- (void).cxx_destruct;
- (id)_assetResourceForAsset:(id)a0;
- (id)_assetResourceFromAcceptableAssetResources:(id)a0;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)_fileRadarWithIncorrectAssets:(id)a0;
- (id)_globalHeaderTitle;
- (BOOL)_isJunkSceneIdentifer:(id)a0;
- (id)_keywordForSceneIdentifier:(id)a0;
- (id)_labelForSceneIdentifier:(id)a0;
- (id)_localFileURLForAssetResource:(id)a0 error:(id *)a1;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)a0;
- (id)_preferredAssetResourcesForAnalyzingAsset:(id)a0;
- (void)_tappedFileRadarButton:(id)a0;
- (double)_thresholdForSceneIdentifer:(id)a0;
- (BOOL)_writeDiagnosticsToURL:(id)a0 incorrectAssets:(id)a1;
- (BOOL)allowSlideshowButton;
- (BOOL)assetConfidenceIsAboveThreshold:(id)a0;
- (BOOL)assetShouldBeSurpassedInNormalUI:(id)a0;
- (void)configureDecorationsForCell:(id)a0 withAsset:(id)a1 assetCollection:(id)a2 thumbnailIsPlaceholder:(BOOL)a3 assetMayHaveChanged:(BOOL)a4;
- (void)configureGlobalHeaderView:(id)a0;
- (void)getEmptyPlaceholderViewTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 buttonAction:(id /* block */ *)a3;
- (double)globalHeaderHeight;
- (id)sceneTaxonomy;

@end
