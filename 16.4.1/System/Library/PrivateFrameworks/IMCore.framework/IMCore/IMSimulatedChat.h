@class NSString, NSMutableDictionary, IMSimulatedAccount, NSMutableArray;
@protocol IMSimulatedChatDelegate;

@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener>

@property (readonly, nonatomic) IMSimulatedAccount *simulatedAccount;
@property (readonly, nonatomic) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (readonly, nonatomic) NSMutableArray *simulatedAttachments;
@property (copy, nonatomic) NSString *simulatedDisplayName;
@property (retain, nonatomic) NSMutableDictionary *guidToMessageItemNeedingAckMap;
@property (weak, nonatomic) id<IMSimulatedChatDelegate> delegate;
@property (nonatomic, getter=shouldUseTimedAck) BOOL useTimedAck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachments;
- (id)displayName;
- (void)sendMessage:(id)a0;
- (id)daemonController;
- (id)account;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (long long)joinState;
- (void)simulateMessageDeliveryForGUID:(id)a0;
- (BOOL)_handleIncomingItem:(id)a0;
- (id)_messageWithGUID:(id)a0;
- (void)beginObservingHandleAvailability;
- (id)chatIdentifier;
- (id)initWithIncomingIDs:(id)a0 messageIDOffset:(unsigned long long)a1 account:(id)a2;
- (id)loadMessagesBeforeDate:(id)a0 limit:(unsigned long long)a1 loadImmediately:(BOOL)a2;
- (void)markAsAutoSpamReported;
- (void)receiveDemoMessage:(id)a0;
- (void)simulatedChat:(id)a0 didHandleItem:(id)a1;
- (void)simulatedChat:(id)a0 didSendMessage:(id)a1;
- (void)simulatedDaemon:(id)a0 willSendBalloonPayload:(id)a1 attachments:(id)a2 messageGUID:(id)a3 bundleID:(id)a4;
- (id)_messagesToProcessFromMessage:(id)a0;
- (void)_processMessage:(id)a0 receivingHandle:(id)a1 sendingHandle:(id)a2;
- (void)markAsHasBeenBlockContact;

@end
