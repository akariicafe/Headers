@interface GTReplayDerivedCounterDataReplyStream : NSObject <GTXPCDispatcher> {
    id /* block */ _callback;
}

@property unsigned long long dispatcherId;

- (id)initWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;

@end
