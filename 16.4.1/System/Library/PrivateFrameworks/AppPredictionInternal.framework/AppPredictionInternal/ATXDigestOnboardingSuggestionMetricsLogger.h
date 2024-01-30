@class ATXDigestOnboardingSuggestionLoggingBiomeStream;

@interface ATXDigestOnboardingSuggestionMetricsLogger : NSObject {
    ATXDigestOnboardingSuggestionLoggingBiomeStream *_digestOnboardingSuggestionLoggingBiomeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDigestOnboardingSuggestionLoggingBiomeStream:(id)a0;
- (id)digestOnboardingSuggestionBookmark;
- (void)logDigestOnboardingSuggestionMetrics;
- (void)logDigestOnboardingSuggestionMetricsWithXPCActivity:(id)a0;
- (void)writeBookmarkToFile:(id)a0;

@end
