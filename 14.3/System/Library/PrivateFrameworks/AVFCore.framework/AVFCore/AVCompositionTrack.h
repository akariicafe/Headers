@class NSArray, AVCompositionTrackInternal;

@interface AVCompositionTrack : AVAssetTrack {
    AVCompositionTrackInternal *_priv;
}

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly) NSArray *formatDescriptionReplacements;

- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;
- (void)dealloc;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)description;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (BOOL)isEnabled;

@end
