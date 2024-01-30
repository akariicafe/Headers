@class NSArray, NSString, PIParallaxSegmentationItem, NSError, NSObject, NURenderContext;
@protocol PFParallaxLayoutConfiguration, PFParallaxAsset, OS_dispatch_queue;

@interface PISegmentationLoader : NSObject <PISegmentationLoading> {
    unsigned long long _signpost;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isLoading;
    BOOL _isCancelled;
    int _loadRequestID;
    int _petsRequestID;
    NSError *_loadingError;
    NURenderContext *_renderContext;
    PIParallaxSegmentationItem *_item;
}

@property (readonly, nonatomic) id<PFParallaxAsset> asset;
@property (nonatomic) long long sourceMode;
@property (nonatomic) unsigned long long classification;
@property (retain, nonatomic) id<PFParallaxLayoutConfiguration> layoutConfiguration;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) BOOL disableRendering;
@property (nonatomic) BOOL proxyOnly;
@property (nonatomic) BOOL disableDownload;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSArray *petsRegions;
@property (copy, nonatomic) NSArray *petsFaceRegions;
@property (copy, nonatomic) id /* block */ downloadProgressHandler;
@property (copy, nonatomic) id /* block */ loadingHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadingHandlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)ensureResources;
+ (void)freeResources;
+ (void)warmUpResources;
+ (void)_ensureResources;
+ (void)_freeResources;
+ (id)_loadSegmentationItemFromURL:(id)a0 error:(id *)a1;
+ (id)_loadSegmentationItemFromWallpaperURL:(id)a0 error:(id *)a1;
+ (void)_saveSegmentationItem:(id)a0 layerStack:(id)a1 toWallpaperURL:(id)a2 completion:(id /* block */)a3;
+ (id)generateLayerStackForItem:(id)a0 style:(id)a1 layout:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (id)loadLayerStackFromWallpaperURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)loadSegmentationItemFromURL:(id)a0 error:(id *)a1;
+ (id)loadSegmentationItemFromWallpaperURL:(id)a0 error:(id *)a1;
+ (id)proxyScalePolicy;
+ (id)reloadSegmentationItemFromWallpaperURL:(id)a0 asset:(id)a1 completion:(id /* block */)a2;
+ (void)renderPreviewLayerStackFromWallpaperURL:(id)a0 styleCategory:(id)a1 completion:(id /* block */)a2;
+ (id)renderPriorityForResourcePriority:(long long)a0;
+ (BOOL)saveSegmentationItem:(id)a0 layerStack:(id)a1 toWallpaperURL:(id)a2 error:(id *)a3;
+ (id)saveSegmentationItem:(id)a0 layerStackOptions:(unsigned long long)a1 configuration:(id)a2 style:(id)a3 layout:(id)a4 toWallpaperURL:(id)a5 completion:(id /* block */)a6;
+ (BOOL)saveSegmentationItem:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (id)segmentationCompositionForAssetResource:(id)a0;
+ (id)segmentationCompositionForImageURL:(id)a0 fileUTI:(id)a1 orientation:(long long)a2 proxyImage:(struct CGImage { } *)a3;
+ (id)segmentationCompositionForProxyImage:(struct CGImage { } *)a0 orientation:(long long)a1;
+ (id)segmentationSourceForImageURL:(id)a0 fileUTI:(id)a1 orientation:(long long)a2 proxyImage:(struct CGImage { } *)a3;
+ (void)warmUpClassificationDetectors;

- (void)_load:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)_loadLocalLightData:(id)a0 completion:(id /* block */)a1;
- (void)_abort:(id)a0;
- (void)_analyzeColors:(id)a0 completion:(id /* block */)a1;
- (void)_cacheSegmentationDataForItem:(id)a0;
- (void)_classify:(id)a0 completion:(id /* block */)a1;
- (void)_didLoad:(id)a0 completion:(id /* block */)a1;
- (void)_handlePartialItem:(id)a0 loadingState:(unsigned long long)a1;
- (BOOL)_isValidSegmentationMatteHistogramForDepth:(id)a0;
- (void)_loadAssetResource:(long long)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_loadAssetResourceForProxy:(BOOL)a0 completion:(id /* block */)a1;
- (void)_loadBackground:(id)a0 completion:(id /* block */)a1;
- (void)_loadFullSizeResource:(id)a0 completion:(id /* block */)a1;
- (void)_loadItem:(id)a0 completion:(id /* block */)a1;
- (void)_loadProxyResource:(id)a0 completion:(id /* block */)a1;
- (void)_loadRegions:(id)a0 completion:(id /* block */)a1;
- (void)_loadSegmentationData:(id)a0 completion:(id /* block */)a1;
- (void)_performLayout:(id)a0 completion:(id /* block */)a1;
- (void)_performSegmentation:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)_segment:(id)a0 completion:(id /* block */)a1;
- (id)_tryLoadSegmentationItemFromCache:(id)a0;
- (id)initWithParallaxAsset:(id)a0;
- (id)initWithSegmentationItem:(id)a0 parallaxAsset:(id)a1;
- (void)loadSegmentationItemWithCompletion:(id /* block */)a0;

@end
