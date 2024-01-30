@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property (readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition { } *mutableComposition;

- (id)segments;
- (BOOL)isPlayable;
- (int)decodabilityValidationResult;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)playabilityValidationResult;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (BOOL)isDecodable;
- (struct OpaqueFigSampleCursorService { } *)_getFigSampleCursorServiceReportingTimeAccuracy:(BOOL *)a0;

@end
