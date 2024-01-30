@class NSArray, HMICameraVideoFrameSampler, NSString, NSMutableArray;
@protocol HMIMotionDetector, HMICameraVideoFrameSelectorDelegate;

@interface HMICameraVideoFrameSelector : HMFObject <HMICameraVideoFrameSamplerDelegate, HMFLogging>

@property (readonly) HMICameraVideoFrameSampler *sampler;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleRate;
@property (readonly) NSMutableArray *framesInternal;
@property (readonly) long long maxFrameCount;
@property (readonly) NSMutableArray *predictedFrames;
@property (readonly) id<HMIMotionDetector> detector;
@property (weak) id<HMICameraVideoFrameSelectorDelegate> delegate;
@property (readonly) NSArray *frames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (void).cxx_destruct;
- (id)initWithResourceAttributes:(id)a0 sampleRate:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)handleVideoFrame:(id)a0 error:(id *)a1;
- (BOOL)isFinishedEarly;
- (void)sampler:(id)a0 didFindSample:(id)a1 target:(id)a2;
- (void)sampler:(id)a0 didDiscardFrame:(id)a1;

@end
