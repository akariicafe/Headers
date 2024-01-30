@class PXPlacesSnapshotFactory, NSMutableDictionary, UIImage, NSString, PHAssetCollection, NSObject;
@protocol PXPlacesSnapshotFactoryDelegate, OS_dispatch_queue;

@interface PXPlacesAlbumCoverProvider : NSObject {
    UIImage *_cachedSnapshotImage;
    NSString *_cachedSnapshotImageIdentifier;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
}

@property (retain, nonatomic) PXPlacesSnapshotFactory *factory;
@property (retain, nonatomic) id<PXPlacesSnapshotFactoryDelegate> factoryDelegate;
@property (retain, nonatomic) PHAssetCollection *placesCollection;
@property (retain, nonatomic) NSMutableDictionary *cachedPlaceholders;
@property (nonatomic) long long cachedCount;

+ (id)_cachedSnapshotPathForFilename:(id)a0;
+ (id)_cachedSnapshotPathDark;
+ (id)_cachedSnapshotPathLight;

- (void).cxx_destruct;
- (BOOL)_fetchCachedSnapshotImage:(out id *)a0 andIdentifier:(out id *)a1 forUserInterfaceStyle:(long long)a2;
- (BOOL)_imageExistsWithLocalIdentifier:(id)a0;
- (id)_placeHolderImageForExtendedTraitCollection:(id)a0;
- (id)backgroundImageNameForType:(unsigned long long)a0 usingTraitCollection:(id)a1;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)a0;
- (id)initWithDelegate:(id)a0 andPlacesCollection:(id)a1;
- (id)placesAlbumCoverProviderLog;
- (void)preloadCachedSnapshotForUserInterfaceStyle:(long long)a0;
- (void)preloadPlaceholderForTraitCollection:(id)a0;
- (void)requestAssetCountWithForcedRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)requestPlacesAlbumCover:(id)a0 snapshotTraitCollection:(id)a1 completion:(id /* block */)a2;

@end
