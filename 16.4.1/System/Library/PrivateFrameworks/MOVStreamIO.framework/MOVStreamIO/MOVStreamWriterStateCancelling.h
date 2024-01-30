@class NSString;

@interface MOVStreamWriterStateCancelling : NSObject <MOVStreamWriterState>

@property (readonly) NSString *name;
@property (readonly) long long writerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithContext:(id)a0;
- (BOOL)canAppendData:(id)a0;
- (id)prepareRecording:(id)a0;
- (id)nextFinishStep:(id)a0;
- (BOOL)canConfigure:(id)a0;
- (BOOL)canFinishRecording:(id)a0;
- (BOOL)canWriteData:(id)a0;
- (id)cancelRecording:(id)a0;
- (id)criticalErrorOccurred:(id)a0 context:(id)a1;
- (id)finishRecording:(id)a0;
- (id)finishedCancelRecording:(id)a0;
- (id)forceFinishRecording:(id)a0;
- (id)prepareFinished:(id)a0;
- (BOOL)stopWriterWhenFifosAreEmpty:(id)a0;

@end
