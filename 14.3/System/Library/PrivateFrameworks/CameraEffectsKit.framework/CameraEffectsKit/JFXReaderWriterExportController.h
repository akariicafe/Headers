@class PVVideoCompositing;

@interface JFXReaderWriterExportController : JFXExportController

@property (nonatomic) float progress;
@property (retain, nonatomic) PVVideoCompositing *customCompositor;

- (void).cxx_destruct;
- (void)cancelExportWithStatus:(long long)a0;
- (void)continueExportAfterDelay;
- (struct CGSize { double x0; double x1; })applyCompositionAspectRatioToAVPresetSize:(struct CGSize { double x0; double x1; })a0 compositionSize:(struct CGSize { double x0; double x1; })a1;
- (id)JFX_videoCompressionSettingsFromAssistant:(id)a0;
- (long long)mapAssetReaderStatusToExportStatus:(long long)a0;
- (long long)mapAssetWriterStatusToExportStatus:(long long)a0;
- (void)updateSessionProgress:(id)a0;
- (void)updateStatusAndErrorFromReader:(id)a0 andWriter:(id)a1;
- (id)fileTypeFromExtension;
- (id)videoCompressionSettings:(struct CGSize { double x0; double x1; })a0;
- (id)videoDecompressionSettingsForVideoCompressionSettings:(id)a0;
- (id)audioCompressionSettings;
- (void)transferSampleBuffers:(id)a0 assetReader:(id)a1 assetWriterInput:(id)a2 assetWriter:(id)a3 timeRangeToExport:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 queue:(id)a5 pass:(long long)a6 completionBlock:(id /* block */)a7;
- (void)JFX_continueExportForNextPreset;

@end
