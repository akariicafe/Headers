@class NSString;

@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate>

@property (copy) id /* block */ retimerDidRetimeSampleBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)retimer:(id)a0 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;

@end
