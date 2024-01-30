@class PHPerson, PHFetchResult, NSDictionary, NSArray, NSString, PUPhotoSelectionManager, PXPhotosDataSource;
@protocol PXDisplayAsset;

@interface PUActivitySharingConfiguration : NSObject

@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (readonly, nonatomic) PUPhotoSelectionManager *selectionManager;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection;
@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) BOOL allowsAirPlayActivity;
@property (nonatomic) BOOL allowsRemoveFromFeaturedPhotosActivity;
@property (nonatomic) BOOL allowsSuggestLessPersonActivity;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic) BOOL wantsActionSheet;
@property (nonatomic) BOOL excludeShareActivity;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) id<PXDisplayAsset> keyAsset;
@property (nonatomic) long long sourceOrigin;

- (void).cxx_destruct;
- (id)initWithCollectionsFetchResult:(id)a0 selectionManager:(id)a1;

@end
