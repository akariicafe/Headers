@class AVAssetWriterInputPixelBufferAdaptor, NSString, AVAssetWriterInput, AVAssetWriter;

@interface SIMovWriter : NSObject {
    NSString *_trackName;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    AVAssetWriterInputPixelBufferAdaptor *_inputAdaptor;
}

- (void)startRecording;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishRecording;
- (id)initWriterWithVideoURL:(id)a0 frameSize:(struct CGSize { double x0; double x1; })a1;
- (void)writeFrame:(struct __CVBuffer { } *)a0 andTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
