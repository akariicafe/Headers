@class NSString;

@interface HMIVideoFrameIntervalSampler : HMIVideoFrameSampler <HMFLogging> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _interval;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstPTS;
    long long _lastIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFrameRate:(float)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
