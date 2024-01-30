@class PHPhotoLibrary, PIParallaxStyle, NSDictionary, NSOperationQueue, NSMutableDictionary, PUWallpaperShuffleLayerStackLoadingOperation, NSURL;

@interface PUWallpaperShuffleResourceManager : NSObject

@property (readonly, nonatomic) NSDictionary *initialPosterMediaByAssetUUIDs;
@property (readonly, nonatomic) long long shuffleType;
@property (readonly, nonatomic) PIParallaxStyle *persistedStyle;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *exportOperationQueue;
@property (readonly, nonatomic) NSMutableDictionary *segmentationLoadingOperationsByAssetUUIDs;
@property (retain, nonatomic) PUWallpaperShuffleLayerStackLoadingOperation *currentLayerStackOperation;
@property (retain, nonatomic) PUWallpaperShuffleLayerStackLoadingOperation *nextLayerStackOperation;
@property (readonly, nonatomic) NSURL *assetDirectory;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) PIParallaxStyle *style;

- (void).cxx_destruct;
- (void)_handleSetStyle:(id)a0;
- (id)_loadResourceForPosterMedia:(id)a0 isPreloading:(BOOL)a1 completion:(id /* block */)a2;
- (void)cancelPreloading;
- (void)exportResourcesForFinalPosterMedia:(id)a0 options:(unsigned long long)a1 assetDirectory:(id)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)initWithPosterMedia:(id)a0 style:(id)a1 assetDirectory:(id)a2 persistedStyle:(id)a3 photoLibrary:(id)a4 shuffleType:(long long)a5;
- (void)preloadResourceForPosterMedia:(id)a0;
- (void)requestResourceForPosterMedia:(id)a0 completion:(id /* block */)a1;
- (id)segmentationItemLoadingOperationForPosterMedia:(id)a0;
- (void)startPreloadingResourcesForPosterMedia:(id)a0;
- (void)stopPreloadingResources;
- (void)stopPreloadingResourcesWithTimeout:(double)a0;

@end
