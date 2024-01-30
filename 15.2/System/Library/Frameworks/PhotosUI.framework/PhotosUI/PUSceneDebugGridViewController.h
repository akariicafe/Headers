@class NSNumber, NSDictionary;

@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController

@property (retain, nonatomic) NSNumber *sceneIdentifier;
@property (copy, nonatomic) NSDictionary *assetsHighestConfidence;

+ (id /* block */)assetResourceLargestToSmallestComparator;

- (id)_globalHeaderTitle;
- (void)configureGlobalHeaderView:(id)a0;
- (double)globalHeaderHeight;
- (void).cxx_destruct;
- (id)_localFileURLForAssetResource:(id)a0 error:(id *)a1;
- (BOOL)_writeDiagnosticsToURL:(id)a0 incorrectAssets:(id)a1;
- (id)_cloneAsset:(id)a0 toDirectory:(id)a1;
- (void)_fileRadarWithIncorrectAssets:(id)a0;
- (BOOL)allowSlideshowButton;
- (void)getEmptyPlaceholderViewTitle:(id *)a0 message:(id *)a1 buttonTitle:(id *)a2 buttonAction:(id /* block */ *)a3;
- (id)_newEditActionItemsWithWideSpacing:(BOOL)a0;
- (void)configureDecorationsForCell:(id)a0 withAsset:(id)a1 assetCollection:(id)a2 thumbnailIsPlaceholder:(BOOL)a3 assetMayHaveChanged:(BOOL)a4;
- (BOOL)assetShouldBeSurpassedInNormalUI:(id)a0;
- (BOOL)assetConfidenceIsAboveThreshold:(id)a0;
- (void)_tappedFileRadarButton:(id)a0;
- (id)_assetResourcesForAssets:(id)a0;
- (id)_assetResourceForAsset:(id)a0;
- (id)_keywordForSceneIdentifier:(id)a0;
- (double)_thresholdForSceneIdentifer:(id)a0;
- (BOOL)_isJunkSceneIdentifer:(id)a0;
- (id)assetResourceFromAcceptableAssetResources:(id)a0;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)a0;

@end
