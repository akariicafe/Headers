@interface PRReplayKitDataRecorder : PRDataRecorder

- (void)start;
- (id)init;
- (void)stopAndDiscard;
- (id)stopAndSave;
- (id)writeToURL;
- (void)discardRecording;
- (void)saveScreenRecordingToURL:(id)a0;

@end
