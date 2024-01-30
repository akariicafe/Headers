@interface ATXHeuristicUpcomingFlightEventUtilities : NSObject

+ (id)weatherAtTravelDestinationSpotlightEntry:(id)a0 schemaForFlight:(id)a1 predictionReasons:(unsigned long long)a2 score:(double)a3 validStartDate:(id)a4 validEndDate:(id)a5;
+ (id)flightCheckInActionSuggestionForEvent:(id)a0 flightSchema:(id)a1 validStartDate:(id)a2 validEndDate:(id)a3;
+ (id)suggestionsForFlightsWithHeuristicDevice:(id)a0;

@end
