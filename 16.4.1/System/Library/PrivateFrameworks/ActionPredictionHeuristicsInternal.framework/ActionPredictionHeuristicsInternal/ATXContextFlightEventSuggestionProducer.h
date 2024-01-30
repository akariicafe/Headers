@class NSString, NSDictionary, NSDate;

@interface ATXContextFlightEventSuggestionProducer : NSObject {
    NSString *_title;
    NSDictionary *_flightInformationSchema;
    NSString *_urlString;
    NSString *_teamIdentifier;
    NSDate *_validFromStartDate;
    NSDate *_validToEndDate;
    NSString *_alternateDestinationTitle;
}

- (void).cxx_destruct;
- (id)_contextTitleWithReasons:(unsigned long long)a0;
- (id)_stringsWithPredictionReasons:(unsigned long long)a0;
- (id)_suggestionForAirplaneModeWithStatus:(BOOL)a0 predictionReasons:(unsigned long long)a1 score:(double)a2;
- (id)disableAirplaneModeWithPredictionReasons:(unsigned long long)a0 score:(double)a1;
- (id)enableAirplaneModeWithPredictionReasons:(unsigned long long)a0 score:(double)a1;
- (id)initWithTitle:(id)a0 flightInformationSchema:(id)a1 urlString:(id)a2 teamIdentifier:(id)a3 validFromStartDate:(id)a4 validToEndDate:(id)a5 alternateDestinationTitle:(id)a6;
- (id)sfSearchResult:(id)a0 title:(id)a1 subtitle:(id)a2 type:(int)a3 sectionHeader:(id)a4 score:(double)a5;
- (id)suggestionForFlightCheckInWithReason:(unsigned long long)a0 score:(double)a1;
- (id)suggestionForFlightInformationWithReason:(unsigned long long)a0 score:(double)a1 date:(id)a2;
- (id)suggestionForRideShareAppForDestination:(id)a0 source:(id)a1 rideOptionName:(id)a2 preferredBundleId:(id)a3 predictionReasons:(unsigned long long)a4 score:(double)a5;
- (id)suggestionForWeatherAtFlightDestinationLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 destination:(id)a1 predictionReasons:(unsigned long long)a2 score:(double)a3;
- (id)suggestionWithAction:(id)a0 predictionReasons:(unsigned long long)a1 score:(double)a2;

@end
