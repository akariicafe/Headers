@class NSProgress, NSURL, PHMediaFormatConversionRequest, NSFileHandle;

@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject

@property (weak) NSProgress *progress;
@property (weak) PHMediaFormatConversionRequest *request;
@property (retain) NSURL *observedFileURL;
@property (retain) NSFileHandle *observedFileHandle;
@property unsigned long long lastFileSize;

- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startObservingProgress:(id)a0 forRequest:(id)a1;

@end
