@class AVAssetExportSession, RCWaveformDataSource, RCComposition;

@interface RCCompositionComposedAssetWriter : NSObject {
    AVAssetExportSession *_exportSession;
    RCWaveformDataSource *_waveformDataSource;
}

@property (readonly, nonatomic) RCComposition *composition;
@property (nonatomic) BOOL canGenerateWaveform;
@property (nonatomic) BOOL canGenerateWaveformByProcessingAVURL;
@property (nonatomic) BOOL canSaveCompositionMetadata;
@property (readonly, nonatomic) float progress;

- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)writeCompositionWithCompletionBlock:(id /* block */)a0;
- (void)_writeCompositionWithCompletionHandler:(id /* block */)a0;
- (void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(id /* block */)a0;
- (void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(id /* block */)a0;

@end
