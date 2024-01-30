@class NSString, EKEvent, NSDictionary;

@interface ATXContextNavigationSuggestionProducer : NSObject {
    NSString *_title;
    EKEvent *_event;
    NSDictionary *_schemaForEvent;
    NSString *_alternateDestinationTitle;
}

- (void).cxx_destruct;
- (id)_contextTitleWithReasons:(unsigned long long)a0;
- (id)_stringsWithPredictionReasons:(unsigned long long)a0;
- (id)initWithTitle:(id)a0 event:(id)a1 schemaForEvent:(id)a2 alternateDestinationTitle:(id)a3;
- (id)suggestionForNavigationToDestination:(id)a0 transportType:(unsigned long long)a1 destinationName:(id)a2 subtitle:(id)a3 predictionReasons:(unsigned long long)a4 score:(double)a5 shouldClearOnEngagement:(BOOL)a6 validStartDate:(id)a7 validEndDate:(id)a8;

@end
