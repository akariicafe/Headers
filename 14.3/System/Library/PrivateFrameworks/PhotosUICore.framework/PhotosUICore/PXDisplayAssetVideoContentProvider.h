@class NSString, NSMutableDictionary, NSObject, PXMediaProvider;
@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate> {
    long long _videoRequestID;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_postprocessingQueue;
    NSMutableDictionary *_loadingQueue_requestsByPriority;
    long long _loadingQueue_lastRequestedPriority;
    id<PXDisplayAsset> _loadingQueue_asset;
    double _videoAspectRatio;
    NSString *_contentIdentifier;
}

@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) BOOL needsPostprocessing;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancelLoading;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (id)videoAspectRatio;
- (id)contentIdentifier;
- (id)analyticsPayload;
- (void)requestLoadingProgressDidChange:(id)a0;
- (void)request:(id)a0 didFinishWithPlayerItem:(id)a1 info:(id)a2;
- (void)beginLoadingWithPriority:(long long)a0;
- (void)postprocessPlayerItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadContent;
- (void)_loadingQueue_setAsset:(id)a0;
- (void)_loadingQueueBeginLoadingWithPriority:(long long)a0;
- (void)_loadingQueue_cancelAllRequests;
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)a0;
- (BOOL)_loadingQueue_needsNewRequestForPriority:(long long)a0;
- (void)_handlePostprocessedPlayerItem:(id)a0 priority:(long long)a1 description:(id)a2;
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)a0 info:(id)a1 priority:(long long)a2;
- (void)_loadingQueue_reloadContent;

@end
