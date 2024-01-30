@class NSString, NSDate;

@interface EKTravelEngineHypothesis : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int transportType;
@property (readonly, copy, nonatomic) NSDate *conservativeDepartureDate;
@property (readonly, nonatomic) double conservativeTravelTime;
@property (readonly, copy, nonatomic) NSDate *suggestedDepartureDate;
@property (readonly, nonatomic) double estimatedTravelTime;
@property (readonly, copy, nonatomic) NSDate *aggressiveDepartureDate;
@property (readonly, nonatomic) double aggressiveTravelTime;
@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, nonatomic) BOOL supportsLiveTraffic;
@property (readonly, nonatomic) unsigned long long currentTrafficDensity;
@property (readonly, copy, nonatomic) NSString *trafficDensityDescription;
@property (readonly, nonatomic) long long travelState;

+ (id)syntheticHypothesisWithStartDate:(id)a0 conservativeTravelTime:(double)a1 estimatedTravelTime:(double)a2 aggressiveTravelTime:(double)a3;

- (id)initWithTransportType:(int)a0 conservativeDepartureDate:(id)a1 conservativeTravelTime:(double)a2 suggestedDepartureDate:(id)a3 estimatedTravelTime:(double)a4 aggressiveDepartureDate:(id)a5 aggressiveTravelTime:(double)a6 routeName:(id)a7 supportsLiveTraffic:(BOOL)a8 currentTrafficDensity:(unsigned long long)a9 trafficDensityDescription:(id)a10 travelState:(long long)a11;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqualToHypothesis:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
