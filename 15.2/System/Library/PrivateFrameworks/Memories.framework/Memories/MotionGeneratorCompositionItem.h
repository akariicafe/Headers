@interface MotionGeneratorCompositionItem : MovieCompositionItem

- (id)initWithClip:(id)a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasVideoContent;
- (id)videoTrackSegmentsWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
