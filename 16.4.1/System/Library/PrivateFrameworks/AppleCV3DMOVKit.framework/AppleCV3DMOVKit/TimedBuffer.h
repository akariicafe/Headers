@interface TimedBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *buffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;

- (id)initWithBuffer:(struct __CVBuffer { } *)a0 atTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
