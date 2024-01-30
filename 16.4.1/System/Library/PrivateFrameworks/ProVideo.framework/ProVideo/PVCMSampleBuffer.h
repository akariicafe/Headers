@class PVImageBuffer;

@interface PVCMSampleBuffer : NSObject

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sampleBufferRef;
@property (readonly, nonatomic) PVImageBuffer *backingPVImageBuffer;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;

+ (struct opaqueCMSampleBuffer { } *)createCMSampleBufferForPVImageBuffer:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(out id *)a2;
+ (id)sampleBufferWithPVImageBuffer:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (id)sampleBufferWithPVImageBuffer:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(out id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(out id *)a1;

@end
