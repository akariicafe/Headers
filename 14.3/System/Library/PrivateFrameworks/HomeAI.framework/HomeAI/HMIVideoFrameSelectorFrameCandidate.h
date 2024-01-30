@class NSArray;

@interface HMIVideoFrameSelectorFrameCandidate : HMFObject

@property (readonly) struct opaqueCMSampleBuffer { } *sbuf;
@property (readonly) float score;
@property (readonly) NSArray *detections;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 score:(float)a1 detections:(id)a2;

@end
