@class PUPhotoEditIrisModel, PHContentEditingOutput, NSProgress, PHAsset, PICompositionController, NUComposition;

@interface PUPhotoEditSaveRequest : NSObject {
    id /* block */ _completionHandler;
    double _beginTimestamp;
    BOOL _useRawIfAvailable;
    NSProgress *_videoExportProgress;
}

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) PHAsset *photo;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, nonatomic) NUComposition *originalComposition;
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput;
@property (readonly, nonatomic) long long workImageVersion;
@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) double progress;

- (void)_transitionToState:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_finishWithSuccess:(BOOL)a0 error:(id)a1;
- (long long)_imageRequestVersion;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (BOOL)_requiresVideoRender;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)a0;
- (void)cancelSaveOperation;
- (id)initWithPhoto:(id)a0 compositionController:(id)a1 contentEditingOutput:(id)a2 workImageVersion:(long long)a3 irisEditModel:(id)a4 originalComposition:(id)a5 useRawIfAvailable:(BOOL)a6;
- (id)initWithPhoto:(id)a0 contentEditingOutput:(id)a1 workImageVersion:(long long)a2 irisEditModel:(id)a3 useRawIfAvailable:(BOOL)a4;
- (id)initWithPhotoToRevertToOriginal:(id)a0;

@end
