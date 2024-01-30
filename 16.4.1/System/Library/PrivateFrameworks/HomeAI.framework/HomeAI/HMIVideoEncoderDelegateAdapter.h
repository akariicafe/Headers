@class NSString;

@interface HMIVideoEncoderDelegateAdapter : HMFObject <HMIVideoEncoderDelegate>

@property (copy) id /* block */ encoderDidEncodeSampleBuffer;
@property (copy) id /* block */ encoderDidFailWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encoder:(id)a0 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)encoder:(id)a0 didFailWithError:(id)a1;

@end
