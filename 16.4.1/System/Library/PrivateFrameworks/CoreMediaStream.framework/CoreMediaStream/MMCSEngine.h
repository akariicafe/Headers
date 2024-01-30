@class NSTimer, NSString, NSURL, NSThread, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray;
@protocol MMCSEngineDelegate, OS_dispatch_queue;

@interface MMCSEngine : NSObject {
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    struct _mmcs_engine { } *_engine;
    struct { long long version; void *context; void /* function */ *getFileDescriptorAndContentTypeFromItemCallback; void /* function */ *getItemProgressCallback; void /* function */ *getItemDoneCallback; void /* function */ *putItemProgressCallback; void /* function */ *putItemDoneCallback; void /* function */ *requestCompletedCallback; } _engineClientContext;
    NSMutableDictionary *_itemIDToAssetMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
}

@property (retain, nonatomic) NSTimer *threadKeepAliveTimer;
@property (nonatomic) BOOL isDone;
@property (weak, nonatomic) id<MMCSEngineDelegate> delegate;
@property (readonly, nonatomic) BOOL hasOutstandingActivity;
@property (nonatomic) BOOL autoGenerateItemID;
@property (nonatomic) BOOL isMetricsGatheringEnabled;
@property (retain, nonatomic) NSThread *workThread;

+ (id)logStringForGetItemState:(int)a0;
+ (id)logStringForPutItemState:(int)a0;

- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)cancelAllOperations;
- (void)_putItemProgressItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 requestorContext:(id)a3 error:(id)a4;
- (void)registerAssetForUpload:(id)a0 completionBlock:(id /* block */)a1;
- (void)_getItemDoneItemID:(unsigned long long)a0 path:(id)a1 requestorContext:(id)a2 error:(id)a3;
- (void)_doNothingTimerHandler:(id)a0;
- (unsigned long long)_nextItemID;
- (void)_requestCompletedRequestorContext:(id)a0;
- (id)_assetWithItemID:(unsigned long long)a0;
- (void)_putItemDoneItemID:(unsigned long long)a0 requestorContext:(id)a1 putReceipt:(id)a2 error:(id)a3;
- (void)_registerRequestorContext:(id)a0;
- (void)cancelOperationsWithContext:(id)a0;
- (void)unregisterAssets:(id)a0;
- (void)_getItemProgressItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 requestorContext:(id)a3 error:(id)a4;
- (id)initWithWorkPath:(id)a0 appIDHeader:(id)a1 dataClass:(id)a2 options:(id)a3 modes:(id)a4;
- (void)_initItemIDPersistence;
- (id)initWithWorkPath:(id)a0 appIDHeader:(id)a1 dataClass:(id)a2 options:(id)a3;
- (void)_removeRequestorContext:(id)a0;
- (void)performBlockOnWorkThread:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void)reregisterAssetForDownload:(id)a0;
- (void)_registerAsset:(id)a0;
- (BOOL)isActive;
- (void)threadMain:(id)a0;
- (void)performBlockOnWorkThread:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (void)getAssets:(id)a0 requestURL:(id)a1 DSID:(id)a2 options:(id)a3;
- (void)unregisterAsset:(id)a0;
- (BOOL)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)a0 outFD:(int *)a1 outItemType:(id *)a2 outError:(id *)a3;
- (void)registerAssets:(id)a0 forDownloadCompletionBlock:(id /* block */)a1;
- (void)_removeAssetForItemID:(unsigned long long)a0;
- (void)putAssets:(id)a0 requestURL:(id)a1 DSID:(id)a2 options:(id)a3;
- (void)reregisterAssetForUpload:(id)a0;
- (void).cxx_destruct;

@end
