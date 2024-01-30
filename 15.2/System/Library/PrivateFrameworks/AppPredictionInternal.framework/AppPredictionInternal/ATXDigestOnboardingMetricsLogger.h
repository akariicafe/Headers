@class ATXDigestOnboardingLoggingBiomeStream;

@interface ATXDigestOnboardingMetricsLogger : NSObject {
    ATXDigestOnboardingLoggingBiomeStream *_digestOnboardingLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (void)writeBookmarkToFile:(id)a0;
- (id)initWithDigestOnboardingLoggingBiomeStream:(id)a0;
- (id)digestOnboardingBookmark;
- (double)minutesAfterMidnight:(id)a0;
- (void)logDigestOnboardingMetricsWithXPCActivity:(id)a0;
- (void)logDigestOnboardingMetrics;

@end
