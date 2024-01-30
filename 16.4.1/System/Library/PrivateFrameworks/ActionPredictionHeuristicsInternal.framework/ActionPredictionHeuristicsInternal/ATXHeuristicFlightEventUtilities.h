@interface ATXHeuristicFlightEventUtilities : NSObject

+ (struct CLLocationCoordinate2D { double x0; double x1; })locationAtArrivalAirport:(id)a0 event:(id)a1;
+ (BOOL)currentLocationIsWithinAirportForEvent:(id)a0;
+ (id)fetchDestinationPlacemarkForFlightEvent:(id)a0;
+ (id)flightInformationSchemaForEvent:(id)a0;
+ (id)flightInformationSpotlightSuggestionForEvent:(id)a0 schemaForFlight:(id)a1 predictionReasons:(unsigned long long)a2 score:(double)a3 validStartDate:(id)a4 validEndDate:(id)a5;
+ (id)flightSchemaForEvent:(id)a0;
+ (id)lastFlightLegEndTimeForEvent:(id)a0;
+ (void)logSuggestion:(id)a0 description:(id)a1;
+ (id)updatedFlightInformationSchemaForEvent:(id)a0 schemaForFlight:(id)a1;

@end
