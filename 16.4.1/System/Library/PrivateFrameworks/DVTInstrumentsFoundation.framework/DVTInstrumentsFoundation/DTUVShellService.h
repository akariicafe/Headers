@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, DTUVService;

@interface DTUVShellService : DTXService {
    NSObject<OS_dispatch_queue> *_messageQueue;
    id<DTUVService> _service;
    NSMutableArray *_queuedServiceMessages;
    id /* block */ _serviceMessageHandler;
}

- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (void)_activateService;
- (void)_bindServiceCancelationToChannelCancelation;
- (id)_makeDTXMessageFrom:(id)a0;
- (id /* block */)_makeDTXReplyHandlerFrom:(id)a0;
- (id)_makeServiceMessageFrom:(id)a0 error:(id *)a1;
- (id /* block */)_makeServiceReplyHandlerFrom:(id)a0;
- (void)_replyToQueuedMessages:(id)a0;
- (id)createExternalService:(id /* block */)a0 error:(id *)a1;

@end
