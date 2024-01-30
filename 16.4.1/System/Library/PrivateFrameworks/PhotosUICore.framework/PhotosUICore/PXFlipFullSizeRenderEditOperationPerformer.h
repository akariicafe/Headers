@interface PXFlipFullSizeRenderEditOperationPerformer : PXAssetEditOperationPerformer

+ (void)_flipFullSizeRenderOnAsset:(id)a0 input:(id)a1 output:(id)a2 completionHandler:(id /* block */)a3;
+ (void)performFlipFullSizeRenderEditOperationOnAsset:(id)a0 completionHandler:(id /* block */)a1;

- (void)executeWithUndoManager:(id)a0 completionHandler:(id /* block */)a1;

@end
