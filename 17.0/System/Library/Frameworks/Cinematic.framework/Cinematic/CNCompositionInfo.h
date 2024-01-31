@class AVMutableCompositionTrack;

@interface CNCompositionInfo : CNAssetInfo

@property (readonly) AVMutableCompositionTrack *cinematicVideoTrack;
@property (readonly) AVMutableCompositionTrack *cinematicDisparityTrack;
@property (readonly) AVMutableCompositionTrack *cinematicMetadataTrack;

- (BOOL)insertTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 ofCinematicAssetInfo:(id)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;

@end
