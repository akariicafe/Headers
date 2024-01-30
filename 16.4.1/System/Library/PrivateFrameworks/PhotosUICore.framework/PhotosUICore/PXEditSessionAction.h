@class NSString;

@interface PXEditSessionAction : PXEditBatchAction {
    NSString *_undoMenuItemTitle;
    NSString *_redoMenuItemTitle;
}

@property (readonly, nonatomic) id sourcePreset;
@property (readonly, nonatomic) id targetPreset;
@property (copy, nonatomic) NSString *localizedActionName;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_applyPreset:(id)a0 actionName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPresetManager:(id)a0 asset:(id)a1 sourcePreset:(id)a2 targetPreset:(id)a3 syncProgress:(id)a4 asyncLoadingStatusManager:(id)a5;
- (void)performRedo:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (void)registerWithUndoManager:(id)a0;

@end
