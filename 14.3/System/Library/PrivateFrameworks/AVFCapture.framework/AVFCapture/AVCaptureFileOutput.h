@class NSURL, AVCaptureFileOutputInternal;
@protocol AVCaptureFileOutputDelegate;

@interface AVCaptureFileOutput : AVCaptureOutput {
    AVCaptureFileOutputInternal *_fileOutputInternal;
}

@property (nonatomic) id<AVCaptureFileOutputDelegate> delegate;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (readonly, nonatomic, getter=isRecordingPaused) BOOL recordingPaused;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } recordedDuration;
@property (readonly, nonatomic) long long recordedFileSize;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } maxRecordedDuration;
@property (nonatomic) long long maxRecordedFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

+ (void)initialize;

- (void)stopRecording;
- (void)pauseRecording;
- (void)dealloc;
- (void)startRecordingToOutputFileURL:(id)a0 recordingDelegate:(id)a1;
- (void)resumeRecording;
- (id)initSubclass;
- (BOOL)pausesRecordingOnInterruption;
- (void)setPausesRecordingOnInterruption:(BOOL)a0;

@end
