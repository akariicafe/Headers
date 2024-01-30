@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PEResourceManager : NSObject <PEResourceLoaderDelegate>

@property (readonly, nonatomic) NSMutableSet *resourceSet;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAllRequests;
- (id)init;
- (void).cxx_destruct;
- (id)compositionControllerWithoutSource:(id)a0 originalComposition:(BOOL)a1 editorBundleID:(id *)a2;
- (void)loadResourceForAsset:(id)a0 requireLocalResources:(BOOL)a1 forceRunAsUnadjustedAsset:(BOOL)a2 progressHandler:(id /* block */)a3 resultHandler:(id /* block */)a4;
- (id)originalCompositionControllerWithoutSource:(id)a0 reconstructIfMissing:(BOOL)a1;
- (void)_removeFromSet:(id)a0;
- (void)_resourceLoader:(id)a0 loadedResult:(id)a1 error:(id)a2;
- (id)compositionControllerWithoutSource:(id)a0;
- (void)resourceLoader:(id)a0 request:(id)a1 didCompleteWithResult:(id)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 downloadProgress:(double)a2;
- (void)resourceLoader:(id)a0 request:(id)a1 mediaLoadDidFailWithError:(id)a2;

@end
