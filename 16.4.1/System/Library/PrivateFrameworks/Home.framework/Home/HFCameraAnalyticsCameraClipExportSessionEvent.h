@interface HFCameraAnalyticsCameraClipExportSessionEvent : HFCameraAnalyticsEvent

@property (nonatomic) double recordingDuration;

- (id)sendEventForState:(unsigned long long)a0;

@end
