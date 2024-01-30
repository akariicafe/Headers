@class IMMomentShareCache, NSURL, PXStaticDisplayAssetsDataSource, PHMomentShare;

@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager {
    IMMomentShareCache *_momentShareCache;
    PXStaticDisplayAssetsDataSource *_currentDataSource;
}

@property (readonly, nonatomic) NSURL *momentShareURL;
@property (readonly, nonatomic) PHMomentShare *momentShare;

- (id)createInitialDataSource;
- (void)_momentShareCacheDidChange:(id)a0;
- (void)_fetchMomentShare;
- (void)_handleFetchedMomentShare:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMomentShareURL:(id)a0;

@end
