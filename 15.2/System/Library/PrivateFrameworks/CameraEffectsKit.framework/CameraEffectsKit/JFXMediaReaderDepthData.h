@class AVDepthData;

@interface JFXMediaReaderDepthData : NSObject

@property (readonly, nonatomic) AVDepthData *avDepthData;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;

- (void).cxx_destruct;
- (id)initWithAVDepthData:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

@end
