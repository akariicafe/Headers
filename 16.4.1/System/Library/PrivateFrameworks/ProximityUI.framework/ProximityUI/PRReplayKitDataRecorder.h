@interface PRReplayKitDataRecorder : PRDataRecorder

- (id)init;
- (void)start;
- (void)discardRecording;
- (void)saveScreenRecordingToURL:(id)a0;
- (void)stopAndDiscard;
- (id)stopAndSave;
- (id)writeToURL;

@end
