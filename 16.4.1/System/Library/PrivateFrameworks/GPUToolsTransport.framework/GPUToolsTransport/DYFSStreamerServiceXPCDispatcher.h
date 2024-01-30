@protocol DYFSStreamerService;

@interface DYFSStreamerServiceXPCDispatcher : GTXPCDispatcher <DYFSStreamerServiceXPCDispatcher> {
    id<DYFSStreamerService> _service;
}

- (void).cxx_destruct;
- (void)finishedSending:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;
- (void)initializeTransfer:(id)a0 replyConnection:(id)a1;
- (void)itemData_attributes_:(id)a0 replyConnection:(id)a1;
- (void)streamAbort:(id)a0 replyConnection:(id)a1;

@end
