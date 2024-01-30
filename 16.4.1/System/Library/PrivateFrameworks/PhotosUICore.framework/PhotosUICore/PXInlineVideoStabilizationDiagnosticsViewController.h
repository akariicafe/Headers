@class NSOperationQueue, PXVideoStabilizeOperation;
@protocol PXVideoStabilizeResult;

@interface PXInlineVideoStabilizationDiagnosticsViewController : PXVideoComparisonViewController {
    PXVideoStabilizeOperation *_stabilizeOperation;
    PXVideoStabilizeOperation *_exportOperation;
    id<PXVideoStabilizeResult> _result;
    NSOperationQueue *_operationQueue;
}

- (id)settings;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_exportRecipe;
- (void)_handleStabilizeOperationCompletedWithCompletionHandler:(id /* block */)a0;
- (id)_newStabilizeOperation;
- (id)extraAlertAction;
- (id)initWithInputAsset:(id)a0;
- (id)inputVideoButtonsTitle;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)prepareVariantVideoWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (id)radarTitle;
- (BOOL)useVariantVideoByDefaultInToggle;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;

@end
