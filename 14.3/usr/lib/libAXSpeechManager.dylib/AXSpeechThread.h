@class NSPort, NSRunLoop;

@interface AXSpeechThread : NSThread {
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)main;

@end
