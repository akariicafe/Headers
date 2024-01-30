@interface CUIKEventSuggestionGenerator : NSObject

+ (id)eventWithSuggestedTimeFromString:(id)a0 referenceDate:(id)a1 inEventStore:(id)a2 options:(unsigned long long)a3;
+ (BOOL)scanStringForFlights:(id)a0 flightNumber:(unsigned long long *)a1 airlineCode:(id *)a2;

@end
