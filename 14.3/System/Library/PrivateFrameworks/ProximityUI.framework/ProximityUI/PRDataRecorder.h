@interface PRDataRecorder : PRDataRecorderBase <PRItemLocalizerDataRecorder>

- (id)init;
- (void)start;
- (void)stopAndDiscard;
- (id)stopAndSave;
- (id)writeToURL;
- (void)discardRecording;
- (void)saveScreenRecordingToURL:(id)a0;

@end
