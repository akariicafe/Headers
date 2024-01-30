@class MNObserverHashTable, NSString, MNLocation, GEOComposedRoute, GEODirectionsRequest, MNCommuteDestinationSuggestion, GEOComposedWaypoint, GEOComposedETARoute, NSDictionary, GEOETATrafficUpdateResponse;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying> {
    GEOComposedRoute *_nonRecommendedRoute;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEOComposedRoute *nonRecommendedRoute;
@property (retain, nonatomic) MNObserverHashTable *observers;
@property (nonatomic) BOOL invalid;
@property (retain, nonatomic) MNCommuteDestinationSuggestion *suggestion;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) GEOComposedWaypoint *waypoint;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) MNLocation *lastMatchedLocation;
@property (readonly) BOOL canGetETARoute;
@property (retain, nonatomic) GEOComposedETARoute *etaRoute;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse;
@property (readonly) BOOL canCalculateETA;
@property (nonatomic) double remainingTime;
@property (nonatomic) double remainingDistance;
@property (nonatomic) BOOL rerouting;
@property (retain, nonatomic) MNLocation *lastLocation;
@property (readonly, nonatomic) double geodesicDistance;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSDictionary *scores;
@property (readonly, nonatomic) NSString *shortDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateFrom:(id)a0;

@end
