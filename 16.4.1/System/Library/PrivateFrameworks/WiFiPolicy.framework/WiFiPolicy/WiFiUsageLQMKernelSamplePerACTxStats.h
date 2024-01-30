@class NSDate;

@interface WiFiUsageLQMKernelSamplePerACTxStats : WiFiUsageLQMSample

@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double duration;

+ (id)sampleWithTimestamp:(id)a0;

- (id)initWithTimestamp:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)populateTXStats:(int)a0 With:(unsigned int)a1 ForQueue:(int)a2;
- (void)transformTXStats;

@end
