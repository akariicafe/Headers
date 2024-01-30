@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence

@property (readonly) double timeInterval;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTimeInterval:(double)a0;
- (void)populateVCPVideoProcessorRequestConfiguration:(id)a0;

@end
