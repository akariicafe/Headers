@interface MapsSuggestionsTransportTypePreferenceCondition : MapsSuggestionsBaseCondition {
    long long _requiredTransportTypePreference;
}

- (id)initWithName:(id)a0;
- (BOOL)isTrue;
- (id)initWithName:(id)a0 requiresTransportType:(long long)a1;

@end
