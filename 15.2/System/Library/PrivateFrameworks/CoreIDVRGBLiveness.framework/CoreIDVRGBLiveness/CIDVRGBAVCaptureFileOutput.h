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
}

@property (weak, nonatomic) id<CIDVRGBAVCaptureFileOutputDelegate> delegate;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;

- (void)stopRecording;
- (void)startRecording;
- (void).cxx_destruct;
- (void)restartRecordingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateRecording;
- (id)initWithVideoOutput:(id)a0;
- (void)recordFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_removeOutputFile;
- (BOOL)_errorIsFileExists:(id)a0;
- (void)_restartRecording;

@end
