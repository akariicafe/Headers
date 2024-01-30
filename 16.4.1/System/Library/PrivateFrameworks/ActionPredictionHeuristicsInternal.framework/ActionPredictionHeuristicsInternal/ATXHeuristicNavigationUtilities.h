@interface ATXHeuristicNavigationUtilities : NSObject

+ (id)getCurrentLocation;
+ (id)_titleWithTravelTimeInSeconds:(double)a0 destinationName:(id)a1;
+ (double)_travelTimeInSecondsWithEvent:(id)a0 destination:(id)a1 transportType:(id)a2 heuristicDevice:(id)a3;
+ (BOOL)allowNavigationSuggestionForLocation:(id)a0 maxDistance:(unsigned long long)a1;
+ (id)destinationPlacemarkForEvent:(id)a0 name:(id)a1 schemaType:(unsigned long long)a2;
+ (id)destinationPlacemarkForLocation:(id)a0 withDestinationName:(id)a1;
+ (id)fetchLocationForLOI:(long long)a0;
+ (BOOL)isAtLocation:(id)a0 maxDistance:(unsigned long long)a1;
+ (BOOL)isDestinationTooCloseToNavigate:(id)a0;
+ (id)locationFromEvent:(id)a0 schemaType:(unsigned long long)a1;
+ (id)navigationSubtitleForType:(unsigned long long)a0;
+ (id)navigationSuggestionActionForDestination:(id)a0 event:(id)a1 transportType:(id)a2 schemaForEvent:(id)a3 predictionReasons:(unsigned long long)a4 heuristicDevice:(id)a5 score:(double)a6 shouldClearOnEngagement:(BOOL)a7 validStartDate:(id)a8 validEndDate:(id)a9;
+ (id)navigationSuggestionActionForEvent:(id)a0 schemaForEvent:(id)a1 transportType:(id)a2 predictionReasons:(unsigned long long)a3 heuristicDevice:(id)a4 score:(double)a5 validStartDate:(id)a6 validEndDate:(id)a7;
+ (id)navigationSuggestionActionForLOI:(long long)a0 destinationName:(id)a1 schemaForEvent:(id)a2 withScore:(double)a3 transportType:(id)a4 predictionReason:(unsigned long long)a5 validStartDate:(id)a6 validEndDate:(id)a7 heuristicDevice:(id)a8;
+ (unsigned long long)navigationTypeForString:(id)a0;
+ (id)placemarkForLOI:(long long)a0 name:(id)a1;
+ (id)schemaTypeToString:(unsigned long long)a0;

@end
