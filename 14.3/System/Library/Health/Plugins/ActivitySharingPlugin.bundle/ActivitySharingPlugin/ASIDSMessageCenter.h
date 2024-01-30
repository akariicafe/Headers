@class ASMessageQueue, NSString, NSObject, IDSService;
@protocol ASIDSMessageCenterDelegate, OS_dispatch_queue;

@interface ASIDSMessageCenter : NSObject <IDSServiceDelegate> {
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_outgoingDispatchQueue;
    NSObject<OS_dispatch_queue> *_incomingDispatchQueue;
    ASMessageQueue *_outgoingMessageQueue;
    ASMessageQueue *_retryMessageQueue;
    ASMessageQueue *_persistedMessageQueue;
}

@property (weak, nonatomic) id<ASIDSMessageCenterDelegate> delegate;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)dealloc;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithServiceIdentifier:(id)a0;
- (void)beginReceivingMessages;
- (void)endReceivingMessages;
- (void)processRetryMessageQueue;
- (void)sendInviteRequest:(id)a0 toDestinations:(id)a1 completion:(id /* block */)a2;
- (void)sendInviteResponse:(id)a0 toDestinations:(id)a1 completion:(id /* block */)a2;
- (void)sendWithdrawInviteRequest:(id)a0 toDestinations:(id)a1 completion:(id /* block */)a2;
- (void)sendFinalizeHandshake:(id)a0 toDestinations:(id)a1 completion:(id /* block */)a2;
- (void)processPersistedMessageQueue;
- (void)_processMessageQueue:(id)a0 preprocessingBlock:(id /* block */)a1;
- (void)_sendMessage:(id)a0 type:(int)a1 destinations:(id)a2 completion:(id /* block */)a3;
- (void)_handleInviteRequest:(id)a0 fromSenderAddress:(id)a1 messageHandledCompletion:(id /* block */)a2;
- (void)_handleErrorSendingInviteRequest:(id)a0;
- (void)_handleInviteResponse:(id)a0 fromSenderAddress:(id)a1 messageHandledCompletion:(id /* block */)a2;
- (void)_handleErrorSendingInviteResponse:(id)a0;
- (void)_handleFinalizeHandshake:(id)a0 fromSenderAddress:(id)a1 messageHandledCompletion:(id /* block */)a2;
- (void)_handleErrorSendingFinalizeHandshake:(id)a0;
- (void)_handleWithdrawInviteRequest:(id)a0 fromSenderAddress:(id)a1 messageHandledCompletion:(id /* block */)a2;
- (void)_handleErrorSendingWithdrawInviteRequest:(id)a0;
- (id)_messageHandlerForType:(int)a0;
- (void)_dispatchAction:(SEL)a0 invocationBlock:(id /* block */)a1;
- (void)_handleMessage:(id)a0 identifier:(id)a1;
- (void)_handleMessageSendSuccess:(BOOL)a0 error:(id)a1 identifier:(id)a2;
- (void)_handleErrorForMessage:(id)a0;
- (id)_idsIdentifiersForDestinations:(id)a0;
- (id)_idsIdentifierForDestination:(id)a0;

@end
