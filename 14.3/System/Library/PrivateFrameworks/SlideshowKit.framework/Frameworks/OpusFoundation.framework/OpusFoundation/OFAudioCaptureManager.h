@class AVCaptureSession, AVCaptureDeviceInput, NSURL, OFAudioRecorder;
@protocol OFAudioCaptureManagerDelegate;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate>

@property (retain, nonatomic) AVCaptureSession *session;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) OFAudioRecorder *recorder;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (nonatomic) id deviceConnectedObserver;
@property (nonatomic) id deviceDisconnectedObserver;
@property (nonatomic) unsigned long long backgroundRecordingID;
@property (readonly, nonatomic) BOOL isCancelled;
@property (nonatomic) id<OFAudioCaptureManagerDelegate> delegate;

- (BOOL)isRecording;
- (void)stopRecording;
- (void)startRecording;
- (void)cancelRecording;
- (void)dealloc;
- (BOOL)openSession;
- (id)_audioDevice;
- (id)_tempFileURL;
- (void)_removeFile:(id)a0;
- (void)recorderRecordingDidBegin:(id)a0;
- (void)recorder:(id)a0 recordingDidFinishToOutputFileURL:(id)a1 error:(id)a2;
- (id)initWithOutputFileURL:(id)a0;
- (unsigned long long)micCount;
- (float)meanAudioLevel;

@end
