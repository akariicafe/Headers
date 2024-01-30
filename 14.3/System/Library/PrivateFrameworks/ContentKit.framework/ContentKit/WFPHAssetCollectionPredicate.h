@class PHAssetCollection;

@interface WFPHAssetCollectionPredicate : NSComparisonPredicate

@property (readonly, nonatomic) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (id)initForAssetsInCollection:(id)a0;
- (id)wf_photoLibraryFilteringPredicate;

@end
