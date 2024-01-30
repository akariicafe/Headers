@class HMICameraVideoFrame;

@interface HMICameraVideoFrameSelectorFrameScore : HMFObject

@property (readonly) HMICameraVideoFrame *frame;
@property (readonly) float score;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFrame:(id)a0 score:(float)a1;

@end
