@class NSObject, NSString, MSAlbumSharingDaemon, MSBackoffManager, MSASPersonModel, MMCSEngine;
@protocol OS_dispatch_queue;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate>

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *personID;
@property (readonly, nonatomic) MMCSEngine *engine;
@property (nonatomic) double maxMMCSTokenValidityTimeInterval;
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon;
@property (weak, nonatomic) MSASPersonModel *model;
@property (weak, nonatomic) MSBackoffManager *backoffManager;
@property (copy, nonatomic) NSString *focusAlbumGUID;
@property (copy, nonatomic) NSString *focusAssetCollectionGUID;
@property (nonatomic) int maxBatchCount;
@property (nonatomic) int maxRetryCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL hasShutDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)retryOutstandingActivities;
- (void)workQueueRetryOutstandingActivities;
- (void)didFinishGettingAllAssets;
- (void)cancelCompletionBlock:(id /* block */)a0;
- (id)initWithPersonID:(id)a0;
- (void)MMCSEngine:(id)a0 didFinishGettingAsset:(id)a1 path:(id)a2 error:(id)a3;
- (id)_canceledError;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(id /* block */)a0;
- (void)MMCSEngine:(id)a0 didCreateRequestorContext:(id)a1 forAssets:(id)a2;
- (void)MMCSEngine:(id)a0 didFinishPuttingAsset:(id)a1 putReceipt:(id)a2 error:(id)a3;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)a0 didMakeGetProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)workQueueCancel;
- (id)initWithPersonID:(id)a0 eventQueue:(id)a1;
- (id)_pathForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)MMCSEngine:(id)a0 didMakePutProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)MMCSEngine:(id)a0 logMessage:(id)a1 logLevel:(int)a2;
- (void)MMCSEngine:(id)a0 logPerformanceMetrics:(id)a1;
- (BOOL)MMCSEngine:(id)a0 shouldLogAtLogLevel:(int)a1;
- (id)_MMCSTokenTooOldError;
- (id)_missingMMCSTokenError;
- (id)_missingURLError;
- (void)_rereadPerformanceLoggingSetting;
- (void)_sendDidIdleNotification;
- (void)stopCompletionBlock:(id /* block */)a0;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (unsigned long long)workQueueNextItemID;

@end
