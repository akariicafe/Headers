@class NSCache, NSString, NSURL, NSURLSession, NSMutableDictionary, NSURLCache, NSObject, NSMapTable, NSURLSessionConfiguration;
@protocol OS_dispatch_queue, NSURLSessionDataDelegate;

@interface MPAbstractNetworkArtworkDataSource : NSObject <NSURLSessionDataDelegate, AVAssetResourceLoaderDelegate, MPArtworkDataSource>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *videoAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSCache *fallbackImageArtworkRepresentationCache;
@property (retain, nonatomic) NSMutableDictionary *pendingRequestURLToCompletionHandlers;
@property (retain, nonatomic) NSMapTable *catalogImageTaskMap;
@property (retain, nonatomic) NSMapTable *resourceLoaderStoragePolicyMap;
@property (retain, nonatomic) NSMutableDictionary *videoTaskToCacheStoragePolicy;
@property (retain, nonatomic) NSMutableDictionary *videoTaskToResourceLoadingRequest;
@property (retain, nonatomic) NSMutableDictionary *videoTaskToData;
@property (retain, nonatomic) NSURLSession *imageURLSession;
@property (retain, nonatomic) NSURLSession *videoURLSession;
@property (weak, nonatomic) NSURLCache *videoURLCache;
@property (weak, nonatomic) id<NSURLSessionDataDelegate> URLSessionDataDelegateProxy;
@property (readonly, nonatomic) NSURLSessionConfiguration *URLSessionConfiguration;
@property (nonatomic) BOOL usesFallbackCache;
@property (retain, nonatomic) NSURL *videoArtworkCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_applyVideoCacheURL:(id)a0 toConfiguration:(id)a1;
+ (void)_applyImageURLCachePolicy:(unsigned long long)a0 cacheDiskPath:(id)a1 toConfiguration:(id)a2;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)cacheKeyForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })bestAvailableSizeForCatalog:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)wantsBackgroundImageDecompression;
- (void)loadRepresentationOfKind:(long long)a0 forArtworkCatalog:(id)a1 completionHandler:(id /* block */)a2;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)loadArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2 systemEffectHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (void)updateURLSessionWithCachePolicy:(unsigned long long)a0 cachePath:(id)a1;
- (BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
- (id)_artworkRepresentationWithImageFromData:(id)a0 forURLResponse:(id)a1 size:(struct CGSize { double x0; double x1; })a2 immediateImageDecompressionAllowed:(BOOL)a3;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)a0 immediateImageDecompressionAllowed:(BOOL)a1;
- (BOOL)_isRepresentationSize:(struct CGSize { double x0; double x1; })a0 validForCatalog:(id)a1;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)a0 kind:(long long)a1 handler:(id /* block */)a2;
- (id)_requestForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)_performAsyncBarrierBlockOnQueue:(id)a0 block:(id /* block */)a1;
- (BOOL)_subclassImplementsSelector:(SEL)a0;
- (void)_performSyncBlockOnQueue:(id)a0 block:(id /* block */)a1;
- (id)_bestVideoArtworkRepresentationForCatalog:(id)a0;
- (id)_cacheKeyForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })_bestAvailableSizeForCatalog:(id)a0 kind:(long long)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (id)existingRepresentationOfKind:(long long)a0 forArtworkCatalog:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (id)sortedSupportedSizesForCatalog:(id)a0;
- (id)supportedSizesForCatalog:(id)a0;
- (void)_didReceiveMemoryWarningNotification:(id)a0;

@end
