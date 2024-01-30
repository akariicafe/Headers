@interface MOVStreamWriterStateFailed : MOVStreamWriterStateFinished

- (void)activateWithContext:(id)a0;
- (id)name;
- (id)criticalErrorOccurred:(id)a0 context:(id)a1;
- (long long)writerStatus;

@end
