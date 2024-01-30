@class ATXDigestOnboardingAppSelectionLoggingBiomeStream;

@interface ATXDigestOnboardingAppSelectionMetricsLogger : NSObject {
    ATXDigestOnboardingAppSelectionLoggingBiomeStream *_digestOnboardingAppSelectionLoggingBiomeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)digestOnboardingAppSelectionBookmark;
- (id)initWithDigestOnboardingAppSelectionLoggingBiomeStream:(id)a0;
- (void)logDigestOnboardingAppSelectionMetrics;
- (void)logDigestOnboardingAppSelectionMetricsWithXPCActivity:(id)a0;
- (void)writeBookmarkToFile:(id)a0;

@end
