@class ATXDigestOnboardingLoggingBiomeStream;

@interface ATXDigestOnboardingMetricsLogger : NSObject {
    ATXDigestOnboardingLoggingBiomeStream *_digestOnboardingLoggingBiomeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)digestOnboardingBookmark;
- (id)initWithDigestOnboardingLoggingBiomeStream:(id)a0;
- (void)logDigestOnboardingMetrics;
- (void)logDigestOnboardingMetricsWithXPCActivity:(id)a0;
- (double)minutesAfterMidnight:(id)a0;
- (void)writeBookmarkToFile:(id)a0;

@end
