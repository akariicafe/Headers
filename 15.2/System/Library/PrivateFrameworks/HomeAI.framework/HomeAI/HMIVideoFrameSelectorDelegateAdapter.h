@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>

@property (copy) id /* block */ frameSelectorDidSelectFrame;
@property (copy) id /* block */ frameSelectorDidDetectMotion;

- (void).cxx_destruct;
- (void)frameSelector:(id)a0 didSelectFrame:(struct opaqueCMSampleBuffer { } *)a1 motionDetections:(id)a2 motionScore:(double)a3;
- (void)frameSelector:(id)a0 didDetectMotion:(id)a1 inFrame:(struct opaqueCMSampleBuffer { } *)a2;

@end
