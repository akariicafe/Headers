@class PXPhotoKitUIMediaProvider, PXAssetReference, PXAssetsDataSourceManager, NSArray, PXPhotosDataSource;

@interface PXSearchResultsOneUpViewModel : NSObject

@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) PXPhotosDataSource *dataSource;
@property (retain, nonatomic) PXAssetReference *initialAssetReference;
@property (copy, nonatomic) NSArray *matchedQueryStrings;
@property (readonly, copy, nonatomic) NSArray *assetUUIDsAllowedToHighlightText;

- (void).cxx_destruct;
- (id)initWithOneUpWithAsset:(id)a0 atIndex:(unsigned long long)a1 inAssetCollection:(id)a2 matchedQueryStrings:(id)a3 assetUUIDsAllowedToHighlightText:(id)a4;
- (void)updateDataSourceWithFetchResult:(id)a0;

@end
