@class NSString, ATLegacyMessageLink, NSMutableOrderedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATLocalCloudAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    ATLegacyMessageLink *_messageLink;
    NSMutableOrderedSet *_queuedAssets;
    NSMutableDictionary *_activeRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)prioritizeAsset:(id)a0;
- (BOOL)linkIsReady;
- (void)cancelAssets:(id)a0;
- (BOOL)canEnqueueAsset:(id)a0;
- (unsigned long long)maximumBatchSize;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)messageLinkWasClosed:(id)a0;
- (unsigned long long)priority;
- (void)messageLinkWasInitialized:(id)a0;
- (BOOL)open;
- (void)dealloc;
- (void)_finishAsset:(id)a0 withError:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (id)initWithMessageLink:(id)a0;
- (void)_handleLocalCloudDownloadResponse:(id)a0;
- (void)_requestNextDownload;

@end
