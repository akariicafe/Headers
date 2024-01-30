@interface TAInterVisitMetricPerDeviceSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double sampledObservationLocationsInterval;
@property (nonatomic) unsigned long long sampledObservationLocationsBufferSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSampledObservationLocationsInterval:(double)a0 sampledObservationLocationsBufferSize:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
