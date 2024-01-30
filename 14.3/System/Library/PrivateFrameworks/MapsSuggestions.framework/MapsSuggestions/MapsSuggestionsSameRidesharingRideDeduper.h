@interface MapsSuggestionsSameRidesharingRideDeduper : MapsSuggestionsBaseDeduper

+ (BOOL)isEnabled;

- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
