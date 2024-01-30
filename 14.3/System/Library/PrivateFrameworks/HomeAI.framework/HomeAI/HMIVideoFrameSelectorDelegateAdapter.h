@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>

@property (copy) id /* block */ frameSelectorDidSelectFrame;

- (void).cxx_destruct;
- (void)frameSelector:(id)a0 didSelectFrame:(struct opaqueCMSampleBuffer { } *)a1 detections:(id)a2;

@end
