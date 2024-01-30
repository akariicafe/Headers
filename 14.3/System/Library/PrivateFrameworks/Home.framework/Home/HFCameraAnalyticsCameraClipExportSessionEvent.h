@interface HFCameraAnalyticsCameraClipExportSessionEvent : HFCameraAnalyticsEvent

@property (nonatomic) double recordingDuration;

- (void)sendEventForState:(unsigned long long)a0;

@end
