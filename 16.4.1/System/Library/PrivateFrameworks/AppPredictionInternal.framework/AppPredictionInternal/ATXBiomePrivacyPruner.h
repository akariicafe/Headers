@interface ATXBiomePrivacyPruner : NSObject

- (void)pruneActivitySuggestionFeedbackStreamWithActivity:(id)a0;
- (void)pruneAllStreamsWithActivity:(id)a0;
- (void)pruneAppLaunchInferredModeStreamWithActivity:(id)a0;
- (void)pruneBlendingStreamsWithActivity:(id)a0;
- (void)pruneDigestOnboardingAppSelectionLoggingStreamWithActivity:(id)a0;
- (void)pruneDigestOnboardingLoggingStreamWithActivity:(id)a0;
- (void)pruneDigestOnboardingSuggestionLoggingStreamWithActivity:(id)a0;
- (void)pruneERMStreamWithActivity:(id)a0;
- (void)pruneFaceGalleryStreamWithActivity:(id)a0;
- (void)pruneLightweightClientModelCacheUpdatesStreamWithActivity:(id)a0;
- (void)pruneLocationStreamWithActivity:(id)a0;
- (void)pruneMissedNotificationRankingStreamWithActivity:(id)a0;
- (void)pruneModeConfigurationUIFlowLoggingStreamWithActivity:(id)a0;
- (void)pruneNotificationDigestStreamWithActivity:(id)a0;
- (void)pruneNotificationEventStreamWithActivity:(id)a0;
- (void)pruneNotificationGroupEventStreamWithActivity:(id)a0;
- (void)pruneNotificationSuggestionInteractionStreamWithActivity:(id)a0;
- (void)pruneNotificationSuggestionStreamWithActivity:(id)a0;
- (void)prunePredictionContextStreamWithActivity:(id)a0;
- (void)prunePrivateStreamWithStreamIdentifier:(id)a0 activity:(id)a1;
- (void)pruneProactiveSuggestionUIFeedbackResultStreamWithActivity:(id)a0;
- (void)pruneWithStreamIdentifier:(id)a0 activity:(id)a1 config:(id)a2 endTime:(double)a3;

@end
