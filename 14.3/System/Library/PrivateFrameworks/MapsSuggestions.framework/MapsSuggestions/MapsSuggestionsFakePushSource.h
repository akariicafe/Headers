@interface MapsSuggestionsFakePushSource : MapsSuggestionsFakePullSource

+ (unsigned long long)disposition;

- (void)pushEntries:(id)a0;
- (double)configureFrequency;
- (void)setConfigureFrequency:(double)a0;

@end
