@class PHPerson, NSArray, PHFetchResult, NSString, PXPhotosDataSource;
@protocol PXDisplayAsset;

@interface PXActivitySharingContext : NSObject

@property (readonly, copy, nonatomic) PHFetchResult *assetCollectionsFetchResult;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) BOOL wantsActionSheet;
@property (nonatomic) BOOL excludeShareActivity;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) id<PXDisplayAsset> keyAsset;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic) long long sourceOrigin;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0 assetsDataSource:(id)a1;
- (id)initWithAssetCollection:(id)a0 photosDataSource:(id)a1;

@end
