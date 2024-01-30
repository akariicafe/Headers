@class FlexAudioClip;

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (retain, nonatomic) FlexAudioClip *clip;

- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithClip:(id)a0;
- (id)trackInfoDict;
- (id)segmentsForFMTrack:(id)a0 andTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (id)audioTrackSegmentsForDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
