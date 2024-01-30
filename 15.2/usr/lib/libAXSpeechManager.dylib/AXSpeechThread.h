@class NSPort, NSRunLoop;

@interface AXSpeechThread : NSThread {
    NSPort *_machPort;
    NSRunLoop *_threadRunLoop;
}

- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)stop;

@end
