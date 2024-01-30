@class NSString, PUReviewAssetsDataSourceManager;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate>

@property (retain, nonatomic, setter=_setAttachedDataSourceManager:) PUReviewAssetsDataSourceManager *_attachedDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)assetsDataSourceManager:(id)a0 didChangeAssetsDataSource:(id)a1;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)a0;
- (void)assetsDataSourceManager:(id)a0 didChangeAssetsDataSource:(id)a1 changeDetails:(id)a2;
- (void)attachDataSourceManager:(id)a0;
- (void)detachCurrentDataSourceManager;
- (void)_createDataSourceFromAssetsDataSource:(id)a0 changeDetails:(id)a1;

@end
