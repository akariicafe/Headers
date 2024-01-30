@interface CFXNextRenderedFrameCallback : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sendAfterRenderTime;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 sendAfterRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
