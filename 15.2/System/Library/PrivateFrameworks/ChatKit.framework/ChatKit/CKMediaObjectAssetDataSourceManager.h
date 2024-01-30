@class NSURL, PHMomentShare, CKMediaObjectAssetDataSource;

@interface CKMediaObjectAssetDataSourceManager : PXAssetsDataSourceManager

@property (retain, nonatomic) PHMomentShare *momentShare;
@property (retain, nonatomic) NSURL *momentShareURL;
@property (nonatomic, setter=_setAdditionalItemsCount:) struct { unsigned long long count; long long type; } additionalItemsCount;
@property (retain, nonatomic) CKMediaObjectAssetDataSource *mediaObjectDataSource;

- (id)initWithDataSource:(id)a0;
- (id)createInitialDataSource;
- (void)_handlePreviewDidChangeNotification:(id)a0;
- (void)_handleMomentShareCacheDidChange:(id)a0;
- (void)setMediaObjectDataSource:(id)a0 withChangeDetails:(id)a1;
- (id)_changeDetailsForDataSource:(id)a0 oldDataSource:(id)a1;
- (void)_updateAdditionalItemsCount;
- (void)_updateMomentShare;
- (struct { unsigned long long x0; long long x1; })_additionalCountInMomentShare:(id)a0 representedCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)_mq_handlePreviewDidChangeNotification:(id)a0;
- (void).cxx_destruct;

@end
