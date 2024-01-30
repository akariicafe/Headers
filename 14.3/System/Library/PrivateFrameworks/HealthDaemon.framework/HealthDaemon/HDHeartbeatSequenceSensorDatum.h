@class NSData, NSUUID;

@interface HDHeartbeatSequenceSensorDatum : HDDataCollectorSensorDatum

@property (readonly, nonatomic) NSData *heartbeatSequenceData;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) double longestSubsequenceStart;
@property (readonly, nonatomic) double longestSubsequenceDuration;
@property (readonly, nonatomic) NSUUID *heartRateVariabilityUUID;

+ (BOOL)supportsSecureCoding;
+ (id)_dataFromHeartbeatArray:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 heartbeats:(id)a2 context:(long long)a3 longestSubsequenceStart:(double)a4 longestSubsequenceDuration:(double)a5 heartRateVariabilityUUID:(id)a6 resumeContext:(id)a7;
- (id)initWithIdentifier:(id)a0 dateInterval:(id)a1 heartbeats:(id)a2 context:(long long)a3 longestSubsequenceStart:(double)a4 longestSubsequenceDuration:(double)a5 medianHeartRate:(id)a6 heartRateVariabilityUUID:(id)a7 resumeContext:(id)a8;

@end
