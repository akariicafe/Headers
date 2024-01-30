@class ATXDigestOnboardingAppSelectionLoggingBiomeStream;

@interface ATXDigestOnboardingAppSelectionMetricsLogger : NSObject {
    ATXDigestOnboardingAppSelectionLoggingBiomeStream *_digestOnboardingAppSelectionLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDigestOnboardingAppSelectionLoggingBiomeStream:(id)a0;
- (id)digestOnboardingAppSelectionBookmark;
- (void)writeBookmarkToFile:(id)a0;
- (void)logDigestOnboardingAppSelectionMetricsWithXPCActivity:(id)a0;
- (void)logDigestOnboardingAppSelectionMetrics;

@end
