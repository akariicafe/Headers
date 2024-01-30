@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>

@property (copy) id /* block */ frameSelectorDidSelectFrame;
@property (copy) id /* block */ frameSelectorDidSkipFrame;
@property (copy) id /* block */ frameSelectorPrepareFrame;

- (void).cxx_destruct;
- (void)frameSelector:(id)a0 didSelectFrame:(struct opaqueCMSampleBuffer { } *)a1 reference:(struct opaqueCMSampleBuffer { } *)a2;
- (void)frameSelector:(id)a0 didSkipFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (struct opaqueCMSampleBuffer { } *)frameSelector:(id)a0 prepareFrame:(struct opaqueCMSampleBuffer { } *)a1;

@end
