@class NSError, PVVideoCompositing;

@interface ReaderWriterExportController : ExportController {
    float m_progress;
    int m_numberOfPasses;
    long long m_status;
    NSError *m_error;
    BOOL m_cancel;
    BOOL m_firstPassDone;
    PVVideoCompositing *m_customCompositor;
}

+ (id)stringForStatus:(long long)a0;

- (void)cancelExport;
- (float)progress;
- (void)continueExportAfterDelay;
- (long long)mapAssetReaderStatusToExportStatus:(long long)a0;
- (long long)mapAssetWriterStatusToExportStatus:(long long)a0;
- (void)updateStatusAndErrorFromReader:(id)a0 andWriter:(id)a1;
- (id)fileTypeFromExtension;
- (id)videoDecompressionSettingsForVideoCompressionSettings:(id)a0;
- (id)audioCompressionSettings;
- (void)transferSampleBuffers:(id)a0 assetReader:(id)a1 assetWriterInput:(id)a2 assetWriter:(id)a3 timeRangeToExport:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4 queue:(id)a5 pass:(long long)a6 completionBlock:(id /* block */)a7;
- (void)_setupMovieController;
- (id)_compositionForExport;
- (void)releaseMovieController;
- (void)noteSessionProgressed:(float)a0;
- (void)updateThemeImages;
- (id)videoCompressionSettings;
- (void)continueExportForNextPreset;

@end
