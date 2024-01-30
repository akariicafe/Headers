@class NSTimer, NSString, UIImage, PHAsset, PHAssetCollection, NSMutableArray, NSObject, PHFetchResult;
@protocol PXPlacesSnapshotFactoryDelegate, OS_dispatch_queue;

@interface PXPlacesSnapshotFactory : NSObject <PHPhotoLibraryChangeObserver> {
    NSString *_cachedFilePathLight;
    NSString *_cachedFilePathDark;
    UIImage *_cachedSnapshotImageLight;
    UIImage *_cachedSnapshotImageDark;
    NSString *_cachedSnapshotImageIdentifier;
    UIImage *_placeholderImage;
    long long _cachedCount;
    NSMutableArray *_requestedCompletionBlocks;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurentQueue;
}

@property (nonatomic) BOOL isRegisteredForPhotoLibraryChanges;
@property (retain, nonatomic) PHAsset *snapshottedAsset;
@property (retain, nonatomic) PHFetchResult *placesAssetsFetchResult;
@property (nonatomic) BOOL countCacheInvalidated;
@property (retain, nonatomic) PHFetchResult *assetCountFetchResult;
@property (retain, nonatomic) NSTimer *assetCountChangedTimer;
@property (retain, nonatomic) NSMutableArray *localSearches;
@property (nonatomic) long long currentUserInterfaceStyle;
@property (weak, nonatomic) id<PXPlacesSnapshotFactoryDelegate> delegate;
@property (retain, nonatomic) PHAssetCollection *placesCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (id)_latestAssetWithLocation;
- (void)requestMapSnapshotForQuery:(id)a0 snapshotOptions:(id)a1 completion:(id /* block */)a2;
- (void)_handleAsyncPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)a0 andCompletion:(id /* block */)a1;
- (void)requestPlacesImageOfAsset:(id)a0 withSnapshotOptions:(id)a1 andCompletion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_addLocalSearch:(id)a0;
- (void)requestPlacesSnapshotWithSnapshotOptions:(id)a0 assets:(id)a1 andCompletion:(id /* block */)a2;
- (void)dealloc;
- (id)_placeHolderImageForExtendedTraitCollection:(id)a0;
- (void)_requestPlacesSnapshotWithSnapshotOptions:(id)a0 visibleRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 andCompletion:(id /* block */)a2;
- (void)_removeLocalSearch:(id)a0;
- (void)requestAssetCountWithForcedRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)_fetchImageOfAsset:(id)a0 withSnapshotOptions:(id)a1 andCompletion:(id /* block */)a2;
- (BOOL)_imageExistsWithLocalIdentifier:(id)a0;
- (void)_saveImage:(id)a0 ofAsset:(id)a1 atPath:(id)a2;
- (void)tickAssetCountChangedTimer:(id)a0;
- (void)removePreviousCachedImages;
- (void)requestPlacesLibraryAlbumSnapshotWithSnapshotOptions:(id)a0 andCompletion:(id /* block */)a1;
- (long long)assetCountWithForcedRefresh:(BOOL)a0;

@end
