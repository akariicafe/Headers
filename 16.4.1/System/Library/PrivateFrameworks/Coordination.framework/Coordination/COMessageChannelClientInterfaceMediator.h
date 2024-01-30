@class COMessageChannel, NSString;

@interface COMessageChannelClientInterfaceMediator : NSObject <COMessageChannelClientInterface>

@property (readonly, weak, nonatomic) COMessageChannel *messageChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMessageChannel:(id)a0;
- (void)failedToSendRequestWithID:(unsigned int)a0 withError:(id)a1;
- (void)receivedRecipientListForRequestID:(unsigned int)a0 recipients:(id)a1;
- (void)receivedRequestWithPayload:(id)a0 payloadType:(id)a1 requestID:(unsigned int)a2 fromMember:(id)a3 withCallback:(id /* block */)a4;
- (void)receivedResponseForRequestID:(unsigned int)a0 responsePayload:(id)a1 responseType:(id)a2 responseError:(id)a3 fromMember:(id)a4;

@end
