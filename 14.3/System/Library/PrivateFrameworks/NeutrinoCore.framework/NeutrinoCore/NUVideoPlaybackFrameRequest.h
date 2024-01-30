@class NUColorSpace, NSDictionary;

@interface NUVideoPlaybackFrameRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain, nonatomic) struct __CVBuffer { } *destinationBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } evaluationTime;
@property (nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (copy, nonatomic) NSDictionary *videoFrames;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
