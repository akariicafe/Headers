@class NSArray, NSDictionary, PXPhotosDataSource;

@interface PXPhotosDataSourceStressTest : PXObservable {
    BOOL _isPrepared;
    NSArray *_categories;
    NSDictionary *_assetsByCategory;
    unsigned long long _sampleLength;
    unsigned long long _sampleIndex;
}

@property (retain, nonatomic, setter=_setDataSource:) PXPhotosDataSource *dataSource;
@property (nonatomic, setter=_setDataSourceIndex:) unsigned long long dataSourceIndex;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (nonatomic) double updateInterval;
@property (nonatomic, getter=isRunning) BOOL running;

- (void)_updateDataSource;
- (id)mutableChangeObject;
- (void)_prepare;
- (void).cxx_destruct;
- (id)init;
- (id)_categoryForAsset:(id)a0;

@end
