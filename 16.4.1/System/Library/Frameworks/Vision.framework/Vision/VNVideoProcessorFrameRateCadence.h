@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence

@property (readonly) long long frameRate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithFrameRate:(long long)a0;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;

@end
