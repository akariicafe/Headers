@class AWAttentionAwarenessClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWClientPollWaiter : NSObject {
    AWAttentionAwarenessClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id /* block */ _clientBlock;
    NSObject<OS_dispatch_source> *_timer;
    int _pollState;
}

- (void)notifyPollEventType:(unsigned long long)a0 event:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (id)initWithClient:(id)a0 timeout:(unsigned long long)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)invokeClientBlock:(unsigned long long)a0 event:(id)a1;

@end
