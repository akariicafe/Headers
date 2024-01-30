@class PHAsset, NSURL;

@interface PXDreamyDiagnosticsViewController : PXVideoComparisonViewController

@property (retain, nonatomic) PHAsset *variantAsset;
@property (retain, nonatomic) NSURL *variantVideoURL;
@property (nonatomic) int variantVideoRequestID;

- (void)viewDidLoad;
- (id)radarTitle;
- (void).cxx_destruct;
- (id)radarComponentID;
- (id)radarComponentName;
- (id)radarComponentVersion;
- (BOOL)useVariantVideoByDefaultInToggle;
- (id)inputVideoButtonsTitle;
- (id)variantVideoButtonsTitle;
- (id)variantVideoDescription;
- (void)invalidateInputAndVariantReferences;
- (void)prepareVariantVideoWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)prepareVariantVideoForExportWithProgress:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_loadAndCacheVariantVideoURLFromAsset:(id)a0 completion:(id /* block */)a1;
- (id)_loadAndCacheVariantAssetWithError:(id *)a0;

@end
