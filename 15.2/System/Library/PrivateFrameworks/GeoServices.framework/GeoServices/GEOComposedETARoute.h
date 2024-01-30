@class NSUUID, NSArray, GEOETARoute, GEOETATrafficUpdateWaypointRoute;

@interface GEOComposedETARoute : NSObject <_GEORouteHypothesisMonitorETAProvider, NSSecureCoding> {
    NSArray *_legs;
    unsigned long long _startingStepIndex;
    GEOETARoute *_geoETARoute;
    GEOETATrafficUpdateWaypointRoute *_geoETAWaypointRoute;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double _hypothesis_travelDuration;
@property (readonly, nonatomic) double _hypothesis_travelDurationAggressiveEstimate;
@property (readonly, nonatomic) double _hypothesis_travelDurationConservativeEstimate;
@property (readonly, nonatomic) NSUUID *uniqueRouteID;
@property (readonly, nonatomic) NSUUID *etauResponseID;
@property (readonly, nonatomic) BOOL hasValidTravelDurations;
@property (readonly, nonatomic) double travelDuration;
@property (readonly, nonatomic) double historicTravelDuration;
@property (readonly, nonatomic) double travelDurationAggressiveEstimate;
@property (readonly, nonatomic) double travelDurationConservativeEstimate;
@property (readonly, nonatomic) double length;

- (void)encodeWithCoder:(id)a0;
- (BOOL)prepareForRequest:(id)a0 route:(id)a1 startRouteCoordinate:(struct { unsigned int x0; float x1; })a2;
- (BOOL)updateForResponse:(id)a0 route:(id)a1;
- (BOOL)_prepareForOldRequest:(id)a0 route:(id)a1 startRouteCoordinate:(struct { unsigned int x0; float x1; })a2;
- (BOOL)_updateForOldResponse:(id)a0 route:(id)a1;
- (double)_travelDurationFromStepID:(unsigned long long)a0 toStepID:(unsigned long long)a1 currentStepRemainingDistance:(double)a2;
- (id)navigabilityInfo;
- (double)travelDurationToEndOfLegFromStepID:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;
- (id)initWithRouteForTesting:(id)a0;
- (id)geoETARoute;
- (id)geoETAWaypointRoute;
- (id)description;
- (void).cxx_destruct;
- (id)geoTrafficBannerText;
- (id)initWithCoder:(id)a0;
- (id)evStepInfos;
- (id)evChargingStationInfos;
- (double)_hypothesis_travelDurationFromStep:(id)a0 stepRemainingDistance:(double)a1;
- (double)travelDurationToEndOfRouteFromStepID:(unsigned long long)a0 currentStepRemainingDistance:(double)a1;

@end
