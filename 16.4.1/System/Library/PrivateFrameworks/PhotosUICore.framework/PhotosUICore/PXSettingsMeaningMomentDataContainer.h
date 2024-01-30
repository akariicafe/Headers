@class PHAssetCollection, PHFetchResult;

@interface PXSettingsMeaningMomentDataContainer : NSObject

@property (readonly, nonatomic) PHFetchResult *curatedAssets;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;

- (void).cxx_destruct;
- (id)initWithCuratedAssets:(id)a0 assetCollection:(id)a1;

@end
