@class PUPhotoEditResourceLoadRequest, NSMutableArray, PUEditableMediaProvider;
@protocol PUEditableAsset;

@interface PUPhotoEditResourceLoader : NSObject

@property (nonatomic, setter=_setResourcesAvailability:) long long resourcesAvailability;
@property (retain, nonatomic) PUPhotoEditResourceLoadRequest *currentRequest;
@property (retain, nonatomic, setter=_setEnqueuedRequests:) NSMutableArray *_enqueuedRequests;
@property (nonatomic, setter=_setContentEditingRequestID:) unsigned long long _contentEditingRequestID;
@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider;
@property (readonly, nonatomic, getter=areResourcesAvailable) BOOL resourcesAvailable;
@property (readonly, nonatomic, getter=isDownloadingResources) BOOL downloadingResources;
@property (readonly, nonatomic, getter=isCheckingForResourceAvailability) BOOL checkingAvailability;

+ (id)compositionFromPHAdjustmentData:(id)a0 error:(id *)a1;

- (BOOL)cancelAllRequests;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (void)enqueueRequest:(id)a0;
- (void).cxx_destruct;
- (void)_initiateRequest:(id)a0;
- (long long)workImageVersionForContentEditingInput:(id)a0;
- (void)_processLoadedContentEditingInput:(id)a0 info:(id)a1 forRequest:(id)a2;
- (void)_processContentEditingInputRequestCompletion:(id)a0 info:(id)a1 forRequest:(id)a2;
- (BOOL)_adjustmentDataIsSupported:(id)a0;
- (void)_requestContentEditingInputForRequest:(id)a0 networkAccessAllowed:(BOOL)a1;
- (void)_handleSuccess:(BOOL)a0 withResult:(id)a1 forRequest:(id)a2 error:(id)a3;
- (void)_dequeueRequestIfNeeded;
- (void)_downloadSignpostEvent:(const char *)a0;

@end
