@interface RCAnalyticsUtilities : NSObject

+ (void)sendDidOpenShareMemoController;
+ (void)sendDidCaptureNewRecording;
+ (void)sendDidPlaybackVoiceMemo;
+ (void)sendDidTrimVoiceMemo;
+ (void)sendDidShareRecording;
+ (void)sendReceivedSharedRecording;
+ (void)sendDidCaptureModifyExistingRecording;
+ (void)sendNewRecordingDuration:(double)a0;
+ (void)sendRecordingsCount:(long long)a0;

@end
