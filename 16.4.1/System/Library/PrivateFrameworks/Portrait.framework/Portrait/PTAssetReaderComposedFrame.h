@interface PTAssetReaderComposedFrame : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) struct __CVBuffer { } *colorBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *auxBuffer;

- (void)dealloc;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 colorBuffer:(struct __CVBuffer { } *)a1 auxBuffer:(struct __CVBuffer { } *)a2;

@end
