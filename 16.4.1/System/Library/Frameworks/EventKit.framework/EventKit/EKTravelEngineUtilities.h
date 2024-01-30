@interface EKTravelEngineUtilities : NSObject

+ (double)minimumAllowableTravelTime;
+ (int)geoTransportTypeForCalLocationRoutingMode:(long long)a0;
+ (BOOL)date:(id)a0 representsApproachingDepartureDateForHypothesis:(id)a1;
+ (int)geoTransportTypeForString:(id)a0;
+ (double)maximumAllowableTravelTime;
+ (BOOL)date:(id)a0 representsImmediateDepartureForHypothesis:(id)a1;
+ (id)cadRouteHypothesisForEKTravelEngineHypothesis:(id)a0;
+ (id)formattedLocationCoordinates:(id)a0;
+ (id)geoTransportTypeAsString:(int)a0;
+ (unsigned long long)geoTrafficDensityForString:(id)a0;
+ (BOOL)travelStateIndicatesTravelingTowardDestination:(long long)a0;
+ (id)geoTrafficDensityAsString:(unsigned long long)a0;
+ (BOOL)date:(id)a0 representsLatenessForHypothesis:(id)a1;
+ (long long)geoRouteHypothesisTravelStateForString:(id)a0;
+ (id)authorizationStatusAsString:(int)a0;

@end
