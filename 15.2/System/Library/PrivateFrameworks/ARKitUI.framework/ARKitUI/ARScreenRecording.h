@class NSString, NSURL, RPScreenRecorder;

@interface ARScreenRecording : NSObject <RPScreenRecorderDelegate> {
    BOOL _startRecordingRequested;
    NSURL *temporaryOutputURL;
}

@property (retain, nonatomic) RPScreenRecorder *recorder;
@property (nonatomic) BOOL saveInPhotosLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRecordingWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)stopRecordingWithHandler:(id /* block */)a0;
- (void)screenRecorderDidChangeAvailability:(id)a0;
- (void)removeTemporaryOutputFile;

@end
