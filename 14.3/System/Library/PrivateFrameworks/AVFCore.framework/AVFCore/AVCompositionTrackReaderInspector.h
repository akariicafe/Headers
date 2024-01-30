@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {
    struct OpaqueFigMutableComposition { } *_figMutableComposition;
}

@property (readonly, nonatomic, getter=_mutableComposition) struct OpaqueFigMutableComposition { } *mutableComposition;

- (int)playabilityValidationResult;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (BOOL)isDecodable;
- (void)dealloc;
- (int)decodabilityValidationResult;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)segments;
- (BOOL)isPlayable;

@end
