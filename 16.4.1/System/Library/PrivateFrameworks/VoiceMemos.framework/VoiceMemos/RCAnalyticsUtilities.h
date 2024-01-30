@interface RCAnalyticsUtilities : NSObject

+ (void)sendReceivedSharedRecording;
+ (void)sendDidShareRecording;
+ (void)sendRecordingsCount:(long long)a0;
+ (void)sendDidPlaybackVoiceMemo;
+ (void)sendDidCaptureModifyExistingRecording;
+ (void)sendDidTrimVoiceMemo;
+ (void)sendDidOpenShareMemoController;
+ (void)sendNewRecordingDuration:(double)a0;
+ (void)sendDidCaptureNewRecording;

@end
