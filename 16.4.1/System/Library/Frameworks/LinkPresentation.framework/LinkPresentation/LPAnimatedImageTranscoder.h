@class AVAssetWriter, AVAssetWriterInput, NSURL, LPImage, AVAssetWriterInputPixelBufferAdaptor;

@interface LPAnimatedImageTranscoder : NSObject {
    LPImage *_sourceImage;
    id /* block */ _completionHandler;
    struct CGImageSource { } *_imageSource;
    NSURL *_outputURL;
    unsigned long long _frameCount;
    unsigned long long _currentFrame;
    double _nextFrameTime;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_input;
    BOOL _stopEncoding;
    BOOL _hasReadyForDataObserver;
    unsigned int _loggingID;
}

+ (id)encodeQueue;

- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)failed;
- (void).cxx_destruct;
- (void)encodeNextFrame;
- (void)transcodeWithCompletionHandler:(id /* block */)a0;
- (void)_transcodeWithCompletionHandler:(id /* block */)a0;
- (void)encodeUntilNotReadyForMoreMediaData;
- (id)initWithAnimatedImage:(id)a0;
- (void)removeReadyForDataObserverIfNeeded;

@end
