@class NSOperationQueue, PXVideoStabilizeOperation;
@protocol PXVideoStabilizeResult;

@interface PXInlineVideoStabilizationDiagnosticsViewController : PXVideoComparisonViewController {
    PXVideoStabilizeOperation *_stabilizeOperation;
    PXVideoStabilizeOperation *_exportOperation;
    id<PXVideoStabilizeResult> _result;
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (id)radarTitle;
- (id)radarComponentName;
- (id)radarComponentID;
- (id)radarComponentVersion;
- (id)initWithInputAsset:(id)a0;
- (BOOL)useVariantVideoByDefaultInToggle;
- (id)inputVideoButtonsTitle;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;
- (id)extraAlertAction;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_exportRecipe;
- (id)_newStabilizeOperation;
- (void)_handleStabilizeOperationCompletedWithCompletionHandler:(id /* block */)a0;
- (id)settings;
- (void)viewDidLoad;

@end
