@class PHContentEditingInputRequestOptions, PHImageResourceChooser, PHAdjustmentDataRequest, NSArray, PAImageConversionServiceClient, PHRepairRequest, PHContentEditingInputResult, NSProgress, PHImageRequest, PHVideoRequest, NSMutableIndexSet;

@interface PHContentEditingInputRequestContext : PHMediaRequestContext {
    PHContentEditingInputResult *_contentEditingInputResult;
    BOOL _useRAWAsUnadjustedBase;
    PHAdjustmentDataRequest *_adjustmentRequest;
    PHVideoRequest *_videoRequest;
    unsigned long long _imageBaseRequestIndex;
    PHImageRequest *_displayImageRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _inflightMediaRequestCount;
    NSProgress *_adjustmentProgress;
    NSProgress *_videoProgress;
    NSProgress *_imageProgress;
    PHRepairRequest *_repairRequest;
    PHImageResourceChooser *_backupChooser;
    NSArray *_assetResources;
    NSMutableIndexSet *_requestIndexesOfAssetResourceRequests;
    PAImageConversionServiceClient *_imageConversionClient;
}

@property (readonly, nonatomic) PHContentEditingInputRequestOptions *options;

- (id /* block */)progressHandler;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (void)processAndReturnResultsWithRequest:(id)a0;
- (void)start;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 useRAWAsUnadjustedBase:(BOOL)a4 resultHandler:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initialRequests;
- (id)_assetResources;
- (BOOL)_shouldRequestImage;
- (id)_lazyAdjustmentProgress;
- (id)_videoBehaviorSpecForBaseVersion:(long long)a0;
- (long long)type;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)_imageBehaviorSpecForBaseVersion:(long long)a0;
- (long long)_adjustmentBaseVersionFromResult:(id)a0 request:(id)a1 canHandleAdjustmentData:(BOOL *)a2;
- (BOOL)_canSkipMediaMetadataCheckWithBaseVersion:(long long)a0;
- (void)_renderVideoFromVideoURL:(id)a0 asset:(id)a1 adjustmentData:(id)a2 canHandleAdjustmentData:(BOOL)a3 resultHandler:(id /* block */)a4;
- (id)_baseMediaRequestsForBaseVersion:(long long)a0 error:(id *)a1;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)_shouldRequestVideo;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (void)_prepareAndAddMediaRequestsToChildRequests:(id)a0;
- (long long)_assetResourceTypeForImageWithBaseVersion:(long long)a0;
- (id)_assetResourceForType:(long long)a0;
- (id)_largestUnadjustedDerivativeImageResource;
- (BOOL)_hasAnyPenultimateResource;
- (id)_resourceRequestForAssetResource:(id)a0 wantsURLOnly:(BOOL)a1 progress:(id)a2;
- (void)_finishIfAllCompleteWithRequest:(id)a0;
- (void)_renderTemporaryVideoForObjectBuilder:(id)a0 resultHandler:(id /* block */)a1;
- (void)cancel;
- (id)_errorFromAssetMediaResult:(id)a0;
- (id)progresses;

@end
