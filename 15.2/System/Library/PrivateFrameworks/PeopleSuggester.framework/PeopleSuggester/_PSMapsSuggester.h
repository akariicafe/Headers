@interface _PSMapsSuggester : NSObject

- (id)suggestionsFromContext:(id)a0 maxSuggestions:(unsigned long long)a1;
- (void)provideMapsFeedback:(id)a0;
- (void)deleteMapsFeedbackEventsMatchingHandle:(id)a0 contactId:(id)a1 startLocationId:(id)a2 endLocationId:(id)a3;

@end
