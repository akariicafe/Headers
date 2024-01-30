@class NSString, _PSCalendarEventPredictor;

@interface _PSCalendarEventPredictorDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol> {
    _PSCalendarEventPredictor *_calendarEventPredictor;
    double _startSecondsFromQuery;
    double _endSecondsFromQuery;
    unsigned long long _maxParticipants;
    BOOL _isEnabled;
    long long _defaultConfidenceCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCalendarEventPredictor:(id)a0 config:(id)a1;
- (id)initWithCalendarEventPredictor:(id)a0 startSecondsFromQuery:(double)a1 endSecondsFromQuery:(double)a2 maxParticipants:(unsigned long long)a3 isEnabled:(BOOL)a4 defaultConfidenceCategory:(long long)a5;
- (void)pingWithCompletion:(id /* block */)a0;
- (void)suggestionsForInteractionSuggestionRequest:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getSuggestionsWithPredictionContext:(id)a0;
- (void)updateWithConfig:(id)a0;

@end
