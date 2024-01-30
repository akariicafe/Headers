@class NSArray, NSProgress, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PXEditPresetManager;

@interface PXEditBatchAction : PXAction {
    NSObject<OS_dispatch_queue> *_actionQueue;
    NSArray *_assets;
    NSArray *_asyncAssets;
    NSArray *_syncAssets;
    NSMutableDictionary *_undoActionMap;
}

@property (readonly, nonatomic) id<PXEditPresetManager> manager;
@property (readonly, nonatomic) NSArray *assets;
@property (nonatomic) BOOL allowSynchronousRendering;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSProgress *syncProgress;
@property (readonly, nonatomic) NSProgress *asyncProgress;

- (void)_cancel;
- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_reportResults:(id)a0;
- (id)localizedProgressToastRedoTitle;
- (id)localizedProgressToastUndoTitle;
- (void)_saveResults:(id)a0 needsUndoMap:(BOOL)a1 completion:(id /* block */)a2;
- (void)_saveUndoMapFromResults:(id)a0 completion:(id /* block */)a1;
- (void)_syncUndoDidFinishWithResults:(id)a0 didCancel:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)asyncAssets;
- (void)executeWithUndoManager:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithPresetManager:(id)a0 syncProgress:(id)a1 asyncProgress:(id)a2 asyncLoadingStatusManager:(id)a3 forAssets:(id)a4;
- (id)localizedProgressToastOngoingTitle;
- (id)localizedProgressToastSuccessTitle;
- (void)performUndo:(id /* block */)a0;
- (id)prefetchOriginalMetadataForAssets:(id)a0;
- (void)saveResults:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldRenderSynchronouslyForAsset:(id)a0;
- (id)syncAssets;
- (void)willBeginActionIsAsync:(BOOL)a0 itemCount:(unsigned long long)a1;
- (void)willBeginActionWithLocalizedTitle:(id)a0 isAsync:(BOOL)a1 itemCount:(unsigned long long)a2;

@end
