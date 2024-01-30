@class NSString, NSDate;

@interface EKMutableTravelEngineHypothesis : EKTravelEngineHypothesis

@property (nonatomic) int transportType;
@property (copy, nonatomic) NSDate *conservativeDepartureDate;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSDate *suggestedDepartureDate;
@property (nonatomic) double estimatedTravelTime;
@property (copy, nonatomic) NSDate *aggressiveDepartureDate;
@property (nonatomic) double aggressiveTravelTime;
@property (copy, nonatomic) NSString *routeName;
@property (nonatomic) BOOL supportsLiveTraffic;
@property (nonatomic) unsigned long long currentTrafficDensity;
@property (copy, nonatomic) NSString *trafficDensityDescription;
@property (nonatomic) long long travelState;

- (void)setTransportType:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRouteName:(id)a0;
- (void)setAggressiveTravelTime:(double)a0;
- (void)setConservativeTravelTime:(double)a0;
- (void)setSupportsLiveTraffic:(BOOL)a0;
- (void)setTravelState:(long long)a0;
- (void)setAggressiveDepartureDate:(id)a0;
- (void)setConservativeDepartureDate:(id)a0;
- (void)setCurrentTrafficDensity:(unsigned long long)a0;
- (void)setEstimatedTravelTime:(double)a0;
- (void)setSuggestedDepartureDate:(id)a0;
- (void)setTrafficDensityDescription:(id)a0;

@end
