@class NSArray, AVCompositionTrackInternal;

@interface AVCompositionTrack : AVAssetTrack {
    AVCompositionTrackInternal *_priv;
}

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly) NSArray *formatDescriptionReplacements;

- (BOOL)isEnabled;
- (struct OpaqueFigMutableComposition { } *)_mutableComposition;
- (id)description;
- (id)segmentForTrackTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (id)_initWithAsset:(id)a0 trackID:(int)a1 trackIndex:(long long)a2;

@end
