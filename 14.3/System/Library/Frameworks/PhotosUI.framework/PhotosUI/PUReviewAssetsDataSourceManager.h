@class NSString, PUReviewDataSource;
@protocol PUDisplayAssetCollection, PUReviewAssetsDataSourceManagerDelegate;

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager <PUReviewDataSourceChangeObserver>

@property (readonly, nonatomic) PUReviewDataSource *_reviewDataSource;
@property (readonly, nonatomic) id<PUDisplayAssetCollection> _containingAssetCollection;
@property (weak, nonatomic) id<PUReviewAssetsDataSourceManagerDelegate> reviewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReviewDataSource:(id)a0;
- (void)reviewDataSourceDidChange:(id)a0 changeDetails:(id)a1;
- (void)_updateWithReviewDataSource:(id)a0 changeDetails:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
