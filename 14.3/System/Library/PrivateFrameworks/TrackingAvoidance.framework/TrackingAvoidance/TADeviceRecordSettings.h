@interface TADeviceRecordSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double expiryTimeInterval;
@property (nonatomic) double purgeTimeInterval;
@property (readonly, nonatomic) double keepAliveInterval;
@property (readonly, nonatomic) double minimumStagingInterval;
@property (readonly, nonatomic) long long stagingBackstopHour;
@property (readonly, nonatomic) long long assumedKeyRollHour;
@property (readonly, nonatomic) double scanInterval;

- (id)init;
- (id)initWithExpiryTimeIntervalOrDefault:(id)a0 purgeTimeIntervalOrDefault:(id)a1 keepAliveIntervalOrDefault:(id)a2 minimumStagingIntervalOrDefault:(id)a3 stagingBackstopHourOrDefault:(id)a4 assumedKeyRollHourOrDefault:(id)a5 scanIntervalOrDefault:(id)a6;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithExpiryTimeInterval:(double)a0 purgeTimeInterval:(double)a1 keepAliveInterval:(double)a2 minimumStagingInterval:(double)a3 stagingBackstopHour:(unsigned long long)a4 assumedKeyRollHour:(unsigned long long)a5 scanInterval:(double)a6;
- (void)encodeWithCoder:(id)a0;

@end
