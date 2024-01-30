@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PXAudioAssetMediaProvider;

@interface PXAppleMusicMediaProvider : NSObject <PXAudioAssetMediaProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_requestByID;
    NSMutableDictionary *_queue_requestIDsByAsset;
    NSMutableDictionary *_queue_downloaderByAsset;
    _Atomic int _requestIDCounter;
}

@property (class, readonly, nonatomic) id<PXAudioAssetMediaProvider> sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequest:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)_nextRequestID;
- (id)_avAssetWithLocalMediaURL:(id)a0 entryPoint:(id)a1 fadeOutDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 maximumDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 audioMix:(id *)a4;
- (void)_handleDownloadFinishedForAsset:(id)a0 downloadLocation:(id)a1 error:(id)a2;
- (id)_localMediaURLForAsset:(id)a0 createIntermediateDirectories:(BOOL)a1 error:(id *)a2;
- (void)_queue_cancelRequest:(long long)a0;
- (void)_queue_deliverResultForRequest:(id)a0 localMediaURL:(id)a1 error:(id)a2;
- (void)_queue_handleDownloadFinishedForAsset:(id)a0 downloadLocation:(id)a1 error:(id)a2;
- (void)_queue_processRequest:(id)a0;
- (void)_queue_startDownloadIfNeededForRequest:(id)a0;
- (id)initWithQOSClass:(unsigned int)a0;
- (long long)requestMediaForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;

@end
