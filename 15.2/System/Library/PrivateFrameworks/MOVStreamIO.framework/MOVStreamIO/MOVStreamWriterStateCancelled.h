@interface MOVStreamWriterStateCancelled : MOVStreamWriterStateFinished

- (void)activateWithContext:(id)a0;
- (id)name;
- (id)cancelRecording:(id)a0;
- (id)criticalErrorOccurred:(id)a0 context:(id)a1;
- (long long)writerStatus;

@end
