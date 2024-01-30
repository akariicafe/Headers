@interface PPSocialHighlightMetrics : NSObject

+ (id)countIMessagesSentInPastWeekWithShouldContinueBlock:(id /* block */)a0;
+ (void)registerClientLinkStatus;
+ (void)registerLogConsumedByClient;
+ (id)sendLinkExpiredMessagesForFeedbackCountsByHighlightId:(id)a0 tvFeedbackCountsByHighlightId:(id)a1 highlights:(id)a2;
+ (void)logLinkExpiredMetricsForHighlight:(id)a0 feedbackCountsByClient:(id)a1 forTVOS:(BOOL)a2;
+ (id)feedbackTypeCountsByHighlightIdentifierInInterval:(double)a0 forTVOS:(BOOL)a1;
+ (id)_countSentMessagesInLastWeekMatchingChatType:(id)a0 shouldContinueBlock:(id /* block */)a1;
+ (void)_recordTipsContentEvent:(id)a0;
+ (id)SMSBucketDescriptionWithShouldContinueBlock:(id /* block */)a0;
+ (id)allHighlightIdentifiersReceivedWithShouldContinueBlock:(id /* block */)a0;
+ (id)highlightsReceivedInInterval:(double)a0 shouldContinueBlock:(id /* block */)a1;
+ (id)hasSentSMSWithShouldContinueBlock:(id /* block */)a0;
+ (id)unsupportedClientsFromPastDayWithShouldContinueBlock:(id /* block */)a0;
+ (void)registerCountLinks;
+ (void)registerExpiredLinkReview;
+ (id)hasSentIMessageWithShouldContinueBlock:(id /* block */)a0;
+ (id)_loggableToggleStatus:(unsigned char)a0;
+ (void)registerDeviceSettingsCollection;
+ (double)hoursFromSeconds:(double)a0;
+ (void)registerSampledUnsupportedClientLogging;
+ (BOOL)_queryLinksWithFetchAttributes:(id)a0 interval:(double)a1 handler:(id /* block */)a2;
+ (unsigned long long)countAllLinksReceivedInMessages;
+ (id)iMessageBucketDescriptionWithShouldContinueBlock:(id /* block */)a0;
+ (id)countSMSSentInPastWeekWithShouldContinueBlock:(id /* block */)a0;

@end
