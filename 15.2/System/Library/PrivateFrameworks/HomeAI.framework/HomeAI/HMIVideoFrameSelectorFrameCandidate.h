@class NSArray;

@interface HMIVideoFrameSelectorFrameCandidate : HMFObject

@property (readonly) struct opaqueCMSampleBuffer { } *sbuf;
@property (readonly) float score;
@property (readonly) NSArray *motionDetections;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 score:(float)a1 motionDetections:(id)a2;

@end
