@class PTCinematographyTrack;

@interface PITapToTrackRenderJob : NURenderJob

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedImagePoint;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) PTCinematographyTrack *completedTrack;
@property BOOL clientRequestedStop;

- (id)result;
- (void).cxx_destruct;
- (void)_reportProgressAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(float)a2;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;

@end
