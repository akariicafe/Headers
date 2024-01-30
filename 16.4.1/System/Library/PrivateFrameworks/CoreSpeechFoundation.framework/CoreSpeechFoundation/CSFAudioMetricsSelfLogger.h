@interface CSFAudioMetricsSelfLogger : NSObject

+ (id)sharedLogger;

- (id)init;
- (void)logMHAssistantDaemonAudioInitContextWithMHUUID:(id)a0 withInitStarted:(BOOL)a1;
- (int)_getMHBluetoothAudioDeviceCategoryFromString:(id)a0;
- (id)_getPreprocessorCompletedMessageWithMetrics:(id)a0;
- (id)_getRunPairs:(id)a0;
- (id)_getSelfFanWithCSSiriFanInfo:(id)a0;
- (int)_getSelfStopRecordingReasonWithADStopRecordingEvent:(unsigned short)a0;
- (int)_getSpeechErrorTypeWithRecordingFailedReason:(long long)a0;
- (void)logCoreSpeechPreprocessorCompletedWithMHUUID:(id)a0 withMetricsDictionary:(id)a1;
- (void)logMHASRAudioConfigureStartedWithMHUUID:(id)a0 withAudioCodecString:(id)a1 withAudioSkippedNumSamples:(unsigned long long)a2;
- (void)logMHASRAudioConfigureStartedWithMHUUID:(id)a0 withAudioCodecString:(id)a1 withAudioSkippedTimeInNs:(unsigned long long)a2;
- (void)logMHApplicationPlaybackAttemptedWithMHUUID:(id)a0 withAppBundleName:(id)a1 withAppBundleVersion:(id)a2;
- (void)logMHAssistantDaemonAudioBluetoothInfoWithMHUUID:(id)a0 withWirelessSplitterSessionState:(int)a1 withAudioDeviceCategory:(id)a2;
- (void)logMHAssistantDaemonAudioConfigureContextWithMHUUID:(id)a0 withConfigureStarted:(BOOL)a1;
- (void)logMHAssistantDaemonAudioFetchRouteContextWithMHUUID:(id)a0 withFetchRouteContextStarted:(BOOL)a1;
- (void)logMHAssistantDaemonAudioLateBufferDetectedWithMHUUID:(id)a0 withBufferReceiptTimeInNs:(unsigned long long)a1;
- (void)logMHAssistantDaemonAudioPrepareContextWithMHUUID:(id)a0 withPrepareStarted:(BOOL)a1;
- (void)logMHAssistantDaemonAudioPrewarmContextWithMHUUID:(id)a0 withPrewarmStarted:(BOOL)a1;
- (void)logMHAssistantDaemonAudioRecordingContextWithMHUUID:(id)a0 withAudioRecordingStarted:(BOOL)a1 withAudioInputRoute:(int)a2 withAudioSource:(int)a3 withAudioInterfaceVendorId:(id)a4 withAudioInterfaceProductId:(id)a5;
- (void)logMHAssistantDaemonAudioRecordingFailedWithMHUUID:(id)a0 withReason:(long long)a1 vendorId:(id)a2 productId:(id)a3;
- (void)logMHAssistantDaemonAudioRecordingFirstBufferWithMHUUID:(id)a0 withStartEvent:(BOOL)a1 withFirstBufferStartTimeOffsetNs:(unsigned long long)a2 withFirstBufferReceiptTimeOffsetNs:(unsigned long long)a3;
- (void)logMHAssistantDaemonAudioRecordingInterruptionContextWithMHUUID:(id)a0 withStartEvent:(BOOL)a1 withLinkID:(id)a2 withAvAudioSessionInterruptorName:(id)a3 withAVAudioSessionInterrupterType:(id)a4;
- (void)logMHAssistantDaemonAudioRecordingInterruptionStartedTier1WithMHUUID:(id)a0 withLinkID:(id)a1 withActiveSessionDisplayIDs:(id)a2;
- (void)logMHAssistantDaemonAudioRecordingLastBufferWithMHUUID:(id)a0 withStartEvent:(BOOL)a1 withLastBufferStartTimeOffsetNs:(unsigned long long)a2 withLastBufferReceiptTimeOffsetNs:(unsigned long long)a3;
- (void)logMHAssistantDaemonAudioRecordingMissedBufferDetectedWithMHUUID:(id)a0;
- (void)logMHAssistantDaemonAudioSessionSetActivateContextWithMHUUID:(id)a0 withSetActivateStarted:(BOOL)a1;
- (void)logMHAssistantDaemonAudioSessionSetInactiveWithMHUUID:(id)a0 withSetInactiveStarted:(BOOL)a1;
- (void)logMHAssistantDaemonAudioStartRecordingContextWithMHUUID:(id)a0 withStartRecordingContext:(BOOL)a1 withFanInfoArray:(id)a2 withActiveSessionDisplayIDs:(id)a3;
- (void)logMHAssistantDaemonAudioStopRecordingContextWithMHUUID:(id)a0 withStopRecordingStarted:(BOOL)a1 withADStopRecordingEvent:(unsigned short)a2;

@end
