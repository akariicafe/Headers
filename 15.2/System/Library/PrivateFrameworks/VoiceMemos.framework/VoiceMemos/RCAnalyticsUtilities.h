@interface RCAnalyticsUtilities : NSObject

+ (void)sendDidOpenShareMemoController;
+ (void)sendDidCaptureNewRecording;
+ (void)sendNewRecordingDuration:(double)a0;
+ (void)sendDidCaptureModifyExistingRecording;
+ (void)sendDidTrimVoiceMemo;
+ (void)sendRecordingsCount:(long long)a0;
+ (void)sendDidShareRecording;
+ (void)sendDidPlaybackVoiceMemo;
+ (void)sendReceivedSharedRecording;

@end
