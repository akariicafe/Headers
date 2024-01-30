@class NSData;

@interface AVCVideoFrame : NSObject {
    id _delegate;
}

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct __CVBuffer { } *depthPixelBuffer;
@property (retain) NSData *imageData;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (retain) NSData *effectsMetadata;
@property float renderProcessTime;

- (id)delegate;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 imageData:(id)a2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 depthPixelBuffer:(struct __CVBuffer { } *)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 imageData:(id)a3 delegate:(id)a4;

@end
