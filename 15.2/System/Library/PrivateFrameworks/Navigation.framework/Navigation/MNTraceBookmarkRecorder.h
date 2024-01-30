@class MNTrace;

@interface MNTraceBookmarkRecorder : NSObject {
    MNTrace *_trace;
}

- (void).cxx_destruct;
- (id)initWithTrace:(id)a0;
- (void)recordBookmarkAtTime:(double)a0 withScreenshotData:(id)a1 completionHandler:(id /* block */)a2;

@end
