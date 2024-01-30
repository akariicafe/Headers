@class ATXDigestOnboardingSuggestionLoggingBiomeStream;

@interface ATXDigestOnboardingSuggestionLogging : NSObject {
    ATXDigestOnboardingSuggestionLoggingBiomeStream *_digestOnboardingSuggestionLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDigestOnboardingSuggestionLoggingBiomeStream:(id)a0;
- (void)logDigestOnboardingSuggestionWithOutcome:(int)a0 timeToResolution:(double)a1;

@end
