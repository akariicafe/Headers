@class KonaClip;

@interface CompositionItem : NSObject

@property (retain, nonatomic) KonaClip *clip;
@property (nonatomic) BOOL isFinalClip;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } destinationDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } leftTransitionExtension;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } rightTransitionExtension;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioStartOffset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioEndOffset;
@property (readonly, nonatomic) BOOL hasVideoContent;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL isFreezeFrame;
@property (nonatomic) float speed;

+ (id)compositionItemWithClip:(id)a0;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)emptyTrackSegmentWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)emptyTrackSegmentWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)videoTrackSegmentsWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)audioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 paddedFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)audioTrackSegmentsLoopedForDestinationTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithClip:(id)a0;
- (id)metaDataVideoAssetURL;
- (id)emptyVideoTrackSegmentsWithDestinationRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)emptyAudioTrackSegmentsWithDestinationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
