@class NSError, NSString, PHAsset, NSDate, PICompositionController, NSProgress, NSObject, NSNumber, PLEditSource;
@protocol OS_dispatch_queue;

@interface PXPhotoKitEditSourceLoader : NSObject <PXEditSourceLoader> {
    unsigned long long _loadingQueue_imageRequestID;
    NSDate *_mainQueue_loadingStartDate;
    NSProgress *_editSourceCreationProgress;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    BOOL _overcaptureSourceIsActive;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) PLEditSource *editSource;
@property (readonly, nonatomic) PLEditSource *overcaptureEditSource;
@property (readonly, nonatomic) PLEditSource *activeEditSource;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, copy, nonatomic) PICompositionController *originalCompositionController;
@property (readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property (readonly, nonatomic) long long baseVersion;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSNumber *loadDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void)beginLoading;
- (void).cxx_destruct;
- (void)_cancelContentInputRequest;
- (void)_handleCancellation;
- (void)_handleContentEditingInputRequestCompletion:(id)a0 info:(id)a1 asset:(id)a2;
- (void)_mainQueue_handleEditSource:(id)a0 overCaptureEditSource:(id)a1 compositionController:(id)a2 originalCompositionController:(id)a3 overCaptureEditSourceIsActive:(BOOL)a4 error:(id)a5;
- (void)_resetProgress;

@end
