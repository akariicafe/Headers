@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence

@property (readonly) double timeInterval;

- (id)initWithTimeInterval:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;

@end
