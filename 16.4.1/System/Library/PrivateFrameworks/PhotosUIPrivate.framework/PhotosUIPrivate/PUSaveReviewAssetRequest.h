@class PUVideoExportNode, NSString, NSURL, PICompositionController, PUEditableMediaProvider, PHContentEditingOutput, PUPhotoEditIrisModel, PUReviewCreateAssetNode;
@protocol PUEditableAsset;

@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate> {
    id /* block */ _completionHandler;
    double _beginTimestamp;
    PUReviewCreateAssetNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
}

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) id<PUEditableAsset> editableAsset;
@property (readonly, nonatomic) PUEditableMediaProvider *editableMediaProvider;
@property (readonly, nonatomic) NSURL *directory;
@property (readonly, copy, nonatomic) PICompositionController *compositionController;
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput;
@property (readonly, nonatomic) long long workImageVersion;
@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_transitionToState:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)runNode:(id)a0 didCancelWithError:(id)a1;
- (void)runNode:(id)a0 didCompleteWithError:(id)a1;
- (void)_finishWithAsset:(id)a0 error:(id)a1;
- (void)_handleOutputNodeFinishedWithError:(id)a0;
- (long long)_imageRequestVersion;
- (void)_performInternalSaveOperation;
- (void)_performSaveOperation;
- (BOOL)_requiresVideoRender;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(id /* block */)a0;
- (void)cancelSaveOperation;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 directory:(id)a2 compositionController:(id)a3 contentEditingOutput:(id)a4 workImageVersion:(long long)a5 irisEditModel:(id)a6;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 directory:(id)a2 compositionController:(id)a3 workImageVersion:(long long)a4 irisEditModel:(id)a5;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 directory:(id)a2 contentEditingOutput:(id)a3 workImageVersion:(long long)a4 irisEditModel:(id)a5;
- (id)initWithAssetForCopying:(id)a0 mediaProvider:(id)a1 directory:(id)a2 resourceURL:(id)a3 contentEditingOutput:(id)a4 workImageVersion:(long long)a5 irisEditModel:(id)a6;
- (id)initWithAssetForRevertToOriginal:(id)a0 mediaProvider:(id)a1 directory:(id)a2;

@end
