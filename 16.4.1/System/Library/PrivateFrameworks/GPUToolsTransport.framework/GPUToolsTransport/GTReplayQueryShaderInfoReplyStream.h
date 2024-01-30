@class GTBulkDataServiceXPCProxy, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface GTReplayQueryShaderInfoReplyStream : NSObject <GTXPCDispatcher> {
    NSObject<OS_os_log> *_log;
    id /* block */ _callback;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property unsigned long long dispatcherId;

- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0 bulkDataProxy:(id)a1;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;

@end
