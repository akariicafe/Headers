@class NSString;
@protocol PUTransientDataSource, PUDisplayAssetCollection;

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager <PUTransientDataSourceChangeObserver>

@property (readonly, nonatomic) id<PUTransientDataSource> _transientDataSource;
@property (readonly, nonatomic) id<PUDisplayAssetCollection> _containingAssetCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateWithTransientDataSource:(id)a0;
- (id)initWithTransientDataSource:(id)a0;
- (void)transientDataSourceDidChange:(id)a0;

@end
