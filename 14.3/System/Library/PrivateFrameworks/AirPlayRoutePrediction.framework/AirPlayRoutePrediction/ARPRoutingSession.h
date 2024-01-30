@class NSString, NSDictionary, NSDateInterval;

@interface ARPRoutingSession : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) double routingSessionTimeout;
@property (class, readonly) double minimumRoutingEventDuration;
@property (class, readonly) double microLocationCorrelationGracePeriod;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *outputDeviceID;
@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector;
@property (readonly, copy, nonatomic) NSDateInterval *interval;

+ (void)writeSessions:(id)a0 routingSessionTimeout:(double)a1 file:(id)a2 error:(id *)a3;
+ (id)routingSessionsFromNowPlayingEvents:(id)a0 microLocationEvents:(id)a1 routingSessionTimeout:(double)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOutputDeviceID:(id)a0 interval:(id)a1 microLocationProbabilityVector:(id)a2;

@end
