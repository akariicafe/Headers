@class NSString;

@interface HMIVideoDecoderDelegateAdapter : HMFObject <HMIVideoDecoderDelegate>

@property (copy) id /* block */ decoderDidDecodeSampleBuffer;
@property (copy) id /* block */ decoderDidFailWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)decoder:(id)a0 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)decoder:(id)a0 didFailWithError:(id)a1;

@end
