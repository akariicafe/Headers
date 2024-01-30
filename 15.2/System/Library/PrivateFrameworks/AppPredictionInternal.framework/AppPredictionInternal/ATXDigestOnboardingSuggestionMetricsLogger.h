@class ATXDigestOnboardingSuggestionLoggingBiomeStream;

@interface ATXDigestOnboardingSuggestionMetricsLogger : NSObject {
    ATXDigestOnboardingSuggestionLoggingBiomeStream *_digestOnboardingSuggestionLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDigestOnboardingSuggestionLoggingBiomeStream:(id)a0;
- (void)writeBookmarkToFile:(id)a0;
- (id)digestOnboardingSuggestionBookmark;
- (void)logDigestOnboardingSuggestionMetricsWithXPCActivity:(id)a0;
- (void)logDigestOnboardingSuggestionMetrics;

@end
