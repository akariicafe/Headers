@class NSDictionary, NSProgress, PUActivityProgressController, NSMutableArray;

@interface PUDuplicateActionController : NSObject {
    long long _itemCount;
    NSMutableArray *_resourceLocalAvailabilityRequests;
}

@property (readonly, copy, nonatomic) NSDictionary *_assetsByAssetCollection;
@property (nonatomic, setter=_setDidCheckDuplicateCapabilities:) BOOL _didCheckDuplicateCapabilities;
@property (readonly, nonatomic) BOOL _canDuplicate;
@property (readonly, nonatomic) BOOL _canExtractStill;
@property (retain, nonatomic, setter=_setOverallProgress:) NSProgress *_overallProgress;
@property (retain, nonatomic, setter=_setDownloadingProgress:) NSProgress *_downloadingProgress;
@property (retain, nonatomic, setter=_setDuplicatingProgress:) NSProgress *_duplicatingProgress;
@property (retain, nonatomic, setter=_setProgressController:) PUActivityProgressController *_progressController;
@property (copy, nonatomic, setter=_setOnFinishDownloadCompletionHandler:) id /* block */ _onFinishDownloadCompletionHandler;
@property (readonly, nonatomic) BOOL shouldUseAlertController;

+ (void)_presentDuplicationWasInterruptedWithItemCount:(long long)a0 hasPhotos:(BOOL)a1 hasVideos:(BOOL)a2;
+ (BOOL)canPerformDuplicateActionOnAssets:(id)a0 orAssetsByAssetCollection:(id)a1;

- (void).cxx_destruct;
- (id)initWithAssetsByAssetCollection:(id)a0;
- (id)alertControllerForDuplicateActionWithPreview:(BOOL)a0 newStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 userConfirmationHandler:(id /* block */)a2;
- (void)_checkDuplicateCapabilities;
- (BOOL)_validateOriginalAssetResourcesForDuplicateAction:(long long)a0;
- (void)performDuplicateAction:(long long)a0 newStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void)_handleOperationCompletionWithError:(id)a0;
- (void)_overallProgressFractionCompletedDidChange;
- (id)init;
- (void)_downloadResourcesForDuplicateAction:(long long)a0 newStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void)_performPhotoLibraryChangeForAction:(long long)a0 newStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void)_handlePhotoLibraryDuplicationCompletionWithSuccess:(BOOL)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_overallProgressIsCancelledDidChange;
- (void)_finishedDownloadWithSuccess:(BOOL)a0;
- (void)_finishedDuplicationWithSuccess:(BOOL)a0;
- (void)_handleProgressUserCancellation;
- (void)_checkHasPhotos:(BOOL *)a0 hasVideos:(BOOL *)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
