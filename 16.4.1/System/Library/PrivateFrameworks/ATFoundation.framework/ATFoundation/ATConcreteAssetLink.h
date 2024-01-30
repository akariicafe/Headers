@class NSString, ATMessageLink, NSMutableSet, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_semaphore, OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver> {
    ATMessageLink *_messageLink;
    NSMutableArray *_outstandingAssets;
    NSMutableSet *_readers;
    NSMutableSet *_readersPendingStop;
    NSMutableDictionary *_readersToAssetsMap;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readerQueue;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_readersPendingStopGroup;
    int _pendingWriteAmount;
    NSObject<OS_dispatch_semaphore> *_pendingWriteSemaphore;
}

@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prioritizeAsset:(id)a0;
- (BOOL)linkIsReady;
- (void)cancelAssets:(id)a0;
- (BOOL)canEnqueueAsset:(id)a0;
- (unsigned long long)maximumBatchSize;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)messageLinkWasClosed:(id)a0;
- (unsigned long long)priority;
- (BOOL)open;
- (void)_finishAsset:(id)a0 withError:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (id)initWithMessageLink:(id)a0;
- (id)_keyForATAssetInReaderMap:(id)a0;
- (void)_requestAsset:(id)a0;
- (id)_urlForWritingAsset:(id)a0 withFileName:(id)a1;

@end
