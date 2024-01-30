@class NSMutableDictionary, QLThumbnailServiceProxy, NSObject;
@protocol OS_dispatch_queue;

@interface QLThumbnailGenerator : NSObject <QLIncrementalThumbnailGenerationHandler>

@property (class, readonly) QLThumbnailGenerator *sharedGenerator;

@property (retain, nonatomic) NSMutableDictionary *requests;
@property (nonatomic) unsigned long long batchingCount;
@property (retain, nonatomic) NSMutableDictionary *pendingCancelledRequests;
@property (retain, nonatomic) NSMutableDictionary *pendingGenerationRequests;
@property (retain, nonatomic) NSMutableDictionary *preparingGenerationRequests;
@property (retain, nonatomic) QLThumbnailServiceProxy *thumbnailServiceProxy;
@property (retain, nonatomic) QLThumbnailServiceProxy *syncThumbnailServiceProxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *requestPreparationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialResponseQueue;

+ (void)initialize;
+ (id)debugDescriptionForErrorCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 request:(id)a1 additionalUserInfo:(id)a2;

- (void)cancelRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)generateBestRepresentationForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addRequest:(id)a0;
- (void)generateRepresentationsForRequest:(id)a0 updateHandler:(id /* block */)a1;
- (void)_removeRequest:(id)a0;
- (void)performInBatch:(id /* block */)a0;
- (void)__callCompletionBlockOfRequest:(id)a0 withError:(id)a1;
- (void)__finishRequest:(id)a0 withError:(id)a1;
- (BOOL)__finishRequestIfInvalid:(id)a0;
- (BOOL)__finishRequestIfNeeded:(id)a0;
- (void)__finishRequestWithoutError:(id)a0;
- (void)__notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)a0 thumbnail:(id)a1 type:(long long)a2 error:(id)a3;
- (void)__removeRequestWithUUID:(id)a0;
- (id)__requestWithUUID:(id)a0;
- (BOOL)__requestWithUUIDIsStillRunning:(id)a0;
- (void)_callCompletionBlockOfRequest:(id)a0 withError:(id)a1;
- (void)_callUpdateBlockOfRequestIfRunning:(id)a0 andUpdateMostRepresentativeThumbnail:(id)a1 type:(long long)a2 error:(id)a3;
- (BOOL)_cancelRequestIfNeeded:(id)a0;
- (void)_createSyncThumbnailServiceProxy;
- (void)_createThumbnailServiceProxy;
- (void)_finishAllRequestsWithError:(id)a0;
- (void)_finishAndCallCompletionBlockOfRequest:(id)a0 withError:(id)a1;
- (void)_finishRequest:(id)a0 withError:(id)a1;
- (BOOL)_finishRequestIfInvalid:(id)a0;
- (BOOL)_finishRequestIfNeeded:(id)a0;
- (void)_finishRequestWithoutError:(id)a0;
- (void)_handleThumbnailGenerationCompletionWithUUID:(id)a0 data:(id)a1 format:(id)a2 metadata:(id)a3 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 iconFlavor:(int)a5 thumbnailType:(long long)a6 clientShouldTakeOwnership:(BOOL)a7 error:(id)a8;
- (BOOL)_isBuildingBatch;
- (void)_logRequestDuration:(id)a0;
- (void)_notifyClientWithNewThumbnailRepresentationForRequestIfNeeded:(id)a0 thumbnail:(id)a1 type:(long long)a2 error:(id)a3;
- (void)_performInBatch:(id /* block */)a0;
- (void)_prepareSyncThumbnailRequest:(id)a0;
- (void)_prepareThumbnailRequestForQueueOrSending:(id)a0 synchronous:(BOOL)a1;
- (void)_queueIconGenerationForRequestIfNeeded:(id)a0;
- (BOOL)_queueThumbnailGenerationForRequestIfNeeded:(id)a0;
- (void)_queueThumbnailRequest:(id)a0;
- (BOOL)_requestRepresentationTypeIsMoreRepresentative:(id)a0 thanType:(long long)a1;
- (id)_requestWithUUID:(id)a0;
- (void)_sendPendingBatches;
- (void)_sendPendingCancelledRequests;
- (void)_sendPendingGenerationRequests;
- (void)_sendSyncGenerationRequest:(id)a0;
- (void)_setMostRepresentativeThumbnail:(id)a0 forRequest:(id)a1;
- (void)didGenerateThumbnailForRequestWithUUID:(id)a0 data:(id)a1 bitmapFormat:(id)a2 metadata:(id)a3 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 iconFlavor:(int)a5 thumbnailType:(long long)a6 clientShouldTakeOwnership:(BOOL)a7;
- (void)didUpdateStatus:(long long)a0 ofThumbnailGenerationWithUUID:(id)a1;
- (void)failedToGenerateThumbnailOfType:(long long)a0 forRequestWithUUID:(id)a1 error:(id)a2;
- (void)generateThumbnailForRequest:(id)a0 updateHandler:(id /* block */)a1 statusHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)saveBestRepresentationForRequest:(id)a0 toFileAtURL:(id)a1 withContentType:(id)a2 allowingThumbnailDownloads:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)saveBestRepresentationForRequest:(id)a0 toFileAtURL:(id)a1 withContentType:(id)a2 completionHandler:(id /* block */)a3;
- (void)synchronousGenerateThumbnailForRequest:(id)a0 updateHandler:(id /* block */)a1 statusHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)thumbnailIconForContentType:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 iconVariant:(long long)a3;
- (id)thumbnailIconForRequest:(id)a0;

@end
