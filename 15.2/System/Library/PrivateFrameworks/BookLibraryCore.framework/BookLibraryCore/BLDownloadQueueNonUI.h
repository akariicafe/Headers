@class BLServiceProxy, NSArray, BLDownloadQueueServerProgressObserver, NSString;

@interface BLDownloadQueueNonUI : NSObject <BUUserAccountObserving>

@property (retain, nonatomic) BLServiceProxy *serviceProxy;
@property (readonly, nonatomic) BLDownloadQueueServerProgressObserver *serverProgressObserver;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)overrideSharedInstance:(id)a0;
+ (id)innerSharedInstance;
+ (void)cancelAllActiveDownloads;

- (void)pauseDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)userAccount:(unsigned long long)a0 didChangeWithReason:(unsigned long long)a1;
- (void)reloadFromServerWithCompletion:(id /* block */)a0;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 isAudiobook:(BOOL)a2 completion:(id /* block */)a3;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addDownloadsWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)restartDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelAllActiveDownloadsWithCompletion:(id /* block */)a0;
- (void)_addDownloadWithMetadata:(id)a0 isRestore:(BOOL)a1 completion:(id /* block */)a2;
- (void)addDownloadWithPurchaseParameters:(id)a0 completion:(id /* block */)a1;
- (void)addRestoreDownloadWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)addDownloadWithPurchaseParameters:(id)a0 storeID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addDownloadWithPermlink:(id)a0 title:(id)a1 completion:(id /* block */)a2;
- (void)addRestoreDownloadsWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 completion:(id /* block */)a2;
- (void)processAutomaticDownloadsWithReply:(id /* block */)a0;
- (void)purchaseWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)_cancelAllPausedDownloads;
- (id)_dateFromObject:(id)a0;
- (void)dealloc;
- (id)_numberFromObject:(id)a0;
- (void)resumeDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_purchaseWithRequest:(id)a0 uiHostProxy:(id)a1 completion:(id /* block */)a2;
- (void)addDownloadsWithRestoreContentRequestItems:(id)a0 completion:(id /* block */)a1;
- (id)_stringFromObject:(id)a0;
- (void)purchaseWithBuyParameters:(id)a0 storeID:(id)a1 isAudiobook:(BOOL)a2 userInfo:(id)a3 completion:(id /* block */)a4;
- (void)addDownloadsWithManifestRequest:(id)a0 completion:(id /* block */)a1;
- (void)addDownloadWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)cancelDownloadWithID:(id)a0 withCompletion:(id /* block */)a1;

@end
