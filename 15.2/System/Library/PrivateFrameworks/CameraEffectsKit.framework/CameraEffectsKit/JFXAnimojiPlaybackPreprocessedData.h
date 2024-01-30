@class ARFrame, NSDictionary, AVDepthData;

@interface JFXAnimojiPlaybackPreprocessedData : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) ARFrame *arFrame;
@property (readonly, nonatomic) AVDepthData *avDepthData;
@property (readonly, nonatomic) NSDictionary *animojiBlendShapes;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } mediaTimeRangeForData;

- (void).cxx_destruct;
- (id)initForRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingDataFromMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 arFrame:(id)a2 avDepthData:(id)a3 animojiBlendShapes:(id)a4;

@end
