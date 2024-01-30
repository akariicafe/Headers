@protocol GTMTLReplayErrorObserver;

@interface GTMTLReplayErrorReplyStream : GTXPCDispatcher <GTMTLReplayErrorObserverXPCDispatcher> {
    id<GTMTLReplayErrorObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)sendErrorToHost_:(id)a0 replyConnection:(id)a1;

@end
