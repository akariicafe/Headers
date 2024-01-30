@class NSString, GEOLocation, NSDate, GEORouteHypothesisIncident, NSError;

@interface GEORouteHypothesis : NSObject <NSSecureCoding> {
    NSString *_trafficDensityDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *generationDate;
@property (readonly, nonatomic) GEOLocation *lastLocation;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) NSDate *suggestedDepartureDate;
@property (readonly, nonatomic) double estimatedTravelTime;
@property (readonly, nonatomic) unsigned long long currentTrafficDensity;
@property (readonly, nonatomic) unsigned long long historicTrafficDensity;
@property (readonly, nonatomic) NSString *trafficDensityDescription;
@property (readonly, copy, nonatomic) NSString *routeName;
@property (readonly, nonatomic) GEORouteHypothesisIncident *mostRelevantIncident;
@property (readonly, nonatomic) long long travelState;
@property (readonly, nonatomic) BOOL supportsLiveTraffic;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDate *conservativeDepartureDate;
@property (readonly, nonatomic) NSDate *aggressiveDepartureDate;
@property (readonly, nonatomic) double conservativeTravelTime;
@property (readonly, nonatomic) double aggressiveTravelTime;

+ (BOOL)supportsTravelState:(long long)a0 forTransportType:(int)a1;
+ (id)_routeHypothesisErrorWithUnderlyingError:(id)a0;

- (void)setRouteName:(id)a0;
- (void)setLastLocation:(id)a0;
- (void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)a0 travelTimeWithTraffic:(double)a1 conservativeTravelTime:(double)a2 aggressiveTravelTime:(double)a3 transportType:(int)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_setError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setSupportsLiveTraffic:(BOOL)a0;
- (void)_clearHypothesisAndSetErrorWithCode:(long long)a0;
- (void)_updateTravelStateHasArrived:(BOOL)a0 isTraveling:(BOOL)a1 travelScore:(double)a2 isNavigating:(BOOL)a3 isNavigatingToDestination:(BOOL)a4;
- (void)_updateTrafficIncidents:(id)a0;
- (void)_updateCurrentTrafficDensity:(double)a0 staticTravelTime:(double)a1;
- (void)_updateHistoricTrafficDensity:(double)a0 staticTravelTime:(double)a1;
- (void)_updateTrafficDensityDescription:(id)a0;

@end
