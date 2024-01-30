@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timerange;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) VCPVideoKeyFrameResult *keyFrame;

- (void).cxx_destruct;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 score:(float)a1 andKeyFrame:(id)a2;

@end
