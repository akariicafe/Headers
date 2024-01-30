@class NSString;

@interface HMIVideoFrameSamplerDelegateAdapter : HMFObject <HMIVideoFrameSamplerDelegate>

@property (copy) id /* block */ frameSamplerDidSampleFrame;
@property (copy) id /* block */ frameSamplerDidDropFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)frameSampler:(id)a0 didDropFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (void)frameSampler:(id)a0 didSampleFrame:(struct opaqueCMSampleBuffer { } *)a1;

@end
