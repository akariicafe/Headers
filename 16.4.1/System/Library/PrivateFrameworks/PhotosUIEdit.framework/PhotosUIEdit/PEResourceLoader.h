@class NSObject, PEResourceLoadRequest, NSMutableArray;
@protocol OS_dispatch_queue, PEAsset;

@interface PEResourceLoader : NSObject

@property (nonatomic, setter=_setResourcesAvailability:) long long resourcesAvailability;
@property (retain, nonatomic) PEResourceLoadRequest *currentRequest;
@property (retain, nonatomic, setter=_setEnqueuedRequests:) NSMutableArray *_enqueuedRequests;
@property (nonatomic, setter=_setContentEditingRequestID:) unsigned long long _contentEditingRequestID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;
@property (readonly, nonatomic) id<PEAsset> asset;
@property (readonly, nonatomic, getter=areResourcesAvailable) BOOL resourcesAvailable;
@property (readonly, nonatomic, getter=isDownloadingResources) BOOL downloadingResources;
@property (readonly, nonatomic, getter=isCheckingForResourceAvailability) BOOL checkingAvailability;
@property (nonatomic) BOOL skipDisplaySizeImage;
@property (nonatomic) BOOL simulateEditEntryError;
@property (nonatomic) BOOL forceRunAsUnadjustedAsset;

+ (id)compositionFromPHAdjustmentData:(id)a0 error:(id *)a1;

- (BOOL)cancelAllRequests;
- (void)enqueueRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)_adjustmentDataIsSupported:(id)a0;
- (void)_dequeueRequestIfNeeded;
- (void)_downloadSignpostEvent:(const char *)a0;
- (void)_handleSuccess:(BOOL)a0 withResult:(id)a1 forRequest:(id)a2 error:(id)a3;
- (void)_initiateRequest:(id)a0;
- (void)_processContentEditingInputRequestCompletion:(id)a0 info:(id)a1 forRequest:(id)a2;
- (void)_processLoadedContentEditingInput:(id)a0 info:(id)a1 forRequest:(id)a2;
- (void)_requestContentEditingInputForRequest:(id)a0 networkAccessAllowed:(BOOL)a1;
- (long long)workImageVersionForContentEditingInput:(id)a0;
- (id)initWithAsset:(id)a0 loadingQueue:(id)a1;

@end
