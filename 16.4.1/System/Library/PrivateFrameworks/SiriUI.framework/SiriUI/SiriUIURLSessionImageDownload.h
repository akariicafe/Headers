@class NSMutableData, UIColor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SiriUIURLSessionImageDownload : NSObject {
    struct CGSize { double width; double height; } _fitToSize;
    NSMutableData *_downloadedData;
    id /* block */ _progressHandler;
    id _client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_renderTimer;
    BOOL _newDataAvailableToRender;
    struct CGImageSource { } *_imageSource;
    unsigned long long _lastUpdatedLength;
    BOOL _finished;
    BOOL _hasSentFinished;
    UIColor *_backgroundFillColor;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFitToSize:(struct CGSize { double x0; double x1; })a0 progressHandler:(id /* block */)a1 incremental:(BOOL)a2 client:(id)a3 fillColor:(id)a4;
- (void)_updateImageFromURL:(id)a0 error:(id)a1;
- (void)appendDownloadedData:(id)a0 fromURL:(id)a1;
- (void)finishedFromURL:(id)a0 error:(id)a1;

@end
