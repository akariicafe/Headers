@class NSObject;
@protocol OS_dispatch_queue;

@interface StreamingOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)isStreamerRunning;
- (void)setSmartCoverState:(BOOL)a0;
- (id)cancelEventStream;
- (id)streamEventWithBlock:(id /* block */)a0 options:(union { })a1;
- (void)setNotificationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (union { })getStreamerOptions;
- (id)initForUnitTest:(BOOL)a0 withQueue:(id)a1;

@end
