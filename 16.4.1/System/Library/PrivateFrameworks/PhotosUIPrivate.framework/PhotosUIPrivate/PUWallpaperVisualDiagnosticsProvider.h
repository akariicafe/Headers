@class PHAsset, PXMediaProvider, PHSuggestion;

@interface PUWallpaperVisualDiagnosticsProvider : NSObject <PXVisualDiagnosticsProvider, PXTapToRadarDiagnosticProvider>

@property (readonly, nonatomic) PHSuggestion *suggestion;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;

+ (id)visualDiagnosticsActionForSuggestion:(id)a0 asset:(id)a1 fromViewController:(id)a2;
+ (id)visualDiagnosticsConfigurationForSuggestion:(id)a0 asset:(id)a1;

- (void).cxx_destruct;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)_addCoverPage:(id)a0;
- (void)_addCropDiagnostics:(id)a0;
- (void)_drawAsset:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;
- (void)addVisualDiagnosticsToContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addAssetDiagnostics:(id)a0;
- (void)_addSuggestionDiagnostics:(id)a0;
- (id)initWithSuggestion:(id)a0 asset:(id)a1;

@end
