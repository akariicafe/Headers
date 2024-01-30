@class NSString, NSMutableArray, IMSimulatedAccount;
@protocol IMSimulatedChatDelegate;

@interface IMSimulatedChat : IMChat <IMSimulatedChatDelegate, IMSimulatedDaemonListener>

@property (readonly, nonatomic) IMSimulatedAccount *simulatedAccount;
@property (readonly, nonatomic) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (readonly, nonatomic) NSMutableArray *simulatedAttachments;
@property (copy, nonatomic) NSString *simulatedDisplayName;
@property (weak, nonatomic) id<IMSimulatedChatDelegate> delegate;

- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (long long)joinState;
- (id)attachments;
- (id)account;
- (id)loadMessagesBeforeDate:(id)a0 limit:(unsigned long long)a1 loadImmediately:(BOOL)a2;
- (void)simulatedDaemon:(id)a0 willSendBalloonPayload:(id)a1 attachments:(id)a2 messageGUID:(id)a3 bundleID:(id)a4;
- (void)markAsAutoSpamReported;
- (void)setDisplayName:(id)a0;
- (BOOL)_handleIncomingItem:(id)a0;
- (id)_messageWithGUID:(id)a0;
- (id)chatIdentifier;
- (id)displayName;
- (id)initWithIncomingIDs:(id)a0 messageIDOffset:(unsigned long long)a1 account:(id)a2;
- (void)chat:(id)a0 didSendMessage:(id)a1;

@end
