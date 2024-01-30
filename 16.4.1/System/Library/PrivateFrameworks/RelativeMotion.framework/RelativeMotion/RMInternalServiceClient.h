@class RMConnectionClient, NSObject;
@protocol OS_dispatch_queue;

@interface RMInternalServiceClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RMConnectionClient *spiClient;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)listClientsWithReply:(id /* block */)a0;
- (void)disconnectAllClientsWithReply:(id /* block */)a0;
- (void)disconnectClient:(id)a0 withReply:(id /* block */)a1;
- (void)getNumClientsWithReply:(id /* block */)a0;
- (void)handleSpiIncomingMessage:(id)a0 data:(id)a1 replyBlock:(id /* block */)a2;
- (void)parseSpiErrorReply:(id)a0 forMessage:(id)a1;

@end
