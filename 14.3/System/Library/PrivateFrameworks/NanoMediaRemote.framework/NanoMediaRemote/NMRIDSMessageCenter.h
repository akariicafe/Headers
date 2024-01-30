@class NSString, NSMutableDictionary, NSObject, IDSService;
@protocol NMRIDSMessageCenterDelegate, OS_dispatch_queue;

@interface NMRIDSMessageCenter : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> *_idsQueue;
    IDSService *_idsService;
    NSMutableDictionary *_messageHandlers;
}

@property (weak, nonatomic) id<NMRIDSMessageCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)_sendMessageWithProtobufData:(id)a0 messageType:(unsigned short)a1 priority:(unsigned long long)a2 timeout:(double)a3 bypassDuet:(BOOL)a4 skipStorage:(BOOL)a5 isResponse:(BOOL)a6 additionalOptions:(id)a7 resultingMessageIdentifier:(id *)a8 error:(id *)a9;
- (void)setMessageHandlerTarget:(id)a0 action:(SEL)a1 forIncomingMessagesOfType:(unsigned short)a2;
- (void)startHandlingMessages;
- (BOOL)sendMessageWithProtobufData:(id)a0 messageType:(unsigned short)a1 priority:(unsigned long long)a2 timeout:(double)a3 bypassDuet:(BOOL)a4 skipStorage:(BOOL)a5 expectReply:(BOOL)a6 queueOneIdentifier:(id)a7 resultingMessageIdentifier:(id *)a8 error:(id *)a9;
- (BOOL)sendMessageWithProtobufData:(id)a0 messageType:(unsigned short)a1 priority:(unsigned long long)a2 timeout:(double)a3 bypassDuet:(BOOL)a4 skipStorage:(BOOL)a5 inReplyTo:(id)a6 resultingMessageIdentifier:(id *)a7 error:(id *)a8;

@end
