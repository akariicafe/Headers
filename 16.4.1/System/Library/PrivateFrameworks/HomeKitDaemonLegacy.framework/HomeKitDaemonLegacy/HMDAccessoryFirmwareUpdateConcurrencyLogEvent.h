@interface HMDAccessoryFirmwareUpdateConcurrencyLogEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long peakConcurrentIPAccessoryUpdateStaging;
@property (readonly, nonatomic) unsigned long long peakConcurrentIPAccessoryUpdateApply;
@property (readonly, nonatomic) unsigned long long peakConcurrentBLEAccessoryUpdateStaging;
@property (readonly, nonatomic) unsigned long long peakConcurrentBLEAccessoryUpdateApply;
@property (readonly, nonatomic) unsigned long long peakConcurrentThreadAccessoryUpdateStaging;
@property (readonly, nonatomic) unsigned long long peakConcurrentThreadAccessoryUpdateApply;

- (id)initWithPeakConcurrentIPAccessoryUpdateStaging:(unsigned long long)a0 peakConcurrentIPAccessoryUpdateApply:(unsigned long long)a1 peakConcurrentBLEAccessoryUpdateStaging:(unsigned long long)a2 peakConcurrentBLEAccessoryUpdateApply:(unsigned long long)a3 peakConcurrentThreadAccessoryUpdateStaging:(unsigned long long)a4 peakConcurrentThreadAccessoryUpdateApply:(unsigned long long)a5;

@end
