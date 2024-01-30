@class HMICameraVideoFrame, HMICameraVideoResourceAttributes, NSString, NSMutableArray;
@protocol HMICameraVideoFrameSamplerDelegate;

@interface HMICameraVideoFrameSampler : HMFObject <HMFLogging>

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetInterval;
@property (readonly) HMICameraVideoResourceAttributes *attributes;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleInterval;
@property (readonly) NSMutableArray *unmatchedSampleFrames;
@property (retain) HMICameraVideoFrame *frame;
@property (getter=isMarkedAsFinished) BOOL markedAsFinished;
@property (weak) id<HMICameraVideoFrameSamplerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)finish;
- (void).cxx_destruct;
- (BOOL)isFinishedEarly;
- (id)initWithResourceAttributes:(id)a0 sampleRate:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 targetInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)appendFrame:(id)a0 error:(id *)a1;
- (BOOL)_appendFrame:(id)a0 error:(id *)a1;

@end
