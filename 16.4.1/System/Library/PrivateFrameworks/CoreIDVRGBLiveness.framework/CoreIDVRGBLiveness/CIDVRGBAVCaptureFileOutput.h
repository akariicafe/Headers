@class AVAssetWriterInput, NSDictionary, NSURL, NSString, AVAssetWriter;
@protocol CIDVRGBAVCaptureFileOutputDelegate;

@interface CIDVRGBAVCaptureFileOutput : NSObject {
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    NSURL *_outputFile;
    BOOL _recording;
    NSDictionary *_videoSettings;
    NSString *_fileType;
    NSString *_fileName;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentTimestamp;
}

@property (weak, nonatomic) id<CIDVRGBAVCaptureFileOutputDelegate> delegate;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (void)stopRecording;
- (void)startRecording;
- (void).cxx_destruct;
- (BOOL)_errorIsFileExists:(id)a0;
- (unsigned long long)_freeDiskSpaceInBytes;
- (void)_removeOutputFile;
- (void)_restartRecording;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentTimestamp;
- (id)initWithVideoOutput:(id)a0;
- (void)invalidateRecording;
- (void)recordFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)restartRecordingWithCompletionHandler:(id /* block */)a0;

@end
