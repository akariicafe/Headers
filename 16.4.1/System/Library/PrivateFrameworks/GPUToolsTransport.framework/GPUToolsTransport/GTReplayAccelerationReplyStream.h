@class GTBulkDataServiceXPCProxy;

@interface GTReplayAccelerationReplyStream : NSObject <GTXPCDispatcher> {
    id /* block */ _callback;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
}

- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0 bulkDataProxy:(id)a1;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;

@end
