@class PHContentEditingOutput, NSProgress, PHAsset, PICompositionController, NUComposition;

@interface PESaveRequest : NSObject {
    id /* block */ _completionHandler;
    double _beginTimestamp;
    NSProgress *_videoExportProgress;
}

@property (readonly, nonatomic) unsigned short videoComplementState;
@property (nonatomic) BOOL crossPlatformSerializationEnabled;
@property (nonatomic) BOOL applyVideoOrientationAsMetadata;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) PHAsset *photo;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) NUComposition *originalComposition;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput;
@property (readonly, nonatomic) long long workImageVersion;
@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) double progress;

- (void)_transitionToState:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_finishWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (BOOL)_requiresVideoRender;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)a0;
- (void)cancelSaveOperation;
- (id)initWithPhotoToRevertToOriginal:(id)a0;
- (id)initWithPhoto:(id)a0 compositionController:(id)a1 contentEditingOutput:(id)a2 workImageVersion:(long long)a3 livePhotoState:(unsigned short)a4 originalComposition:(id)a5;
- (id)initWithPhoto:(id)a0 contentEditingOutput:(id)a1 workImageVersion:(long long)a2 livePhotoState:(unsigned short)a3;

@end
