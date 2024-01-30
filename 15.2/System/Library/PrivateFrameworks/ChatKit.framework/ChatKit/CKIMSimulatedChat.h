@class IMHandle, NSString, NSArray, CKIMSimulatedAccount;
@protocol CKIMSimulatedChatDelegate;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener>

@property (readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount;
@property (readonly, nonatomic) NSString *simulatedGUID;
@property (readonly, nonatomic) NSArray *incomingHandles;
@property (readonly, nonatomic) IMHandle *outgoingHandle;
@property (readonly, nonatomic) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (weak, nonatomic) id<CKIMSimulatedChatDelegate> delegate;

+ (id)prepopulatedChat;

- (unsigned char)chatStyle;
- (id)participants;
- (void)sendMessage:(id)a0;
- (void)simulatedDaemon:(id)a0 willSendBalloonPayload:(id)a1 attachments:(id)a2 messageGUID:(id)a3 bundleID:(id)a4;
- (id)account;
- (void)markAsAutoSpamReported;
- (void)_sendMessage:(id)a0 adjustingSender:(BOOL)a1 shouldQueue:(BOOL)a2;
- (void)chat:(id)a0 didSendMessage:(id)a1 finished:(BOOL)a2;
- (BOOL)_handleIncomingItem:(id)a0;
- (id)_messageWithGUID:(id)a0;
- (id)initWithIncomingIDs:(id)a0 outgoingID:(id)a1 messageIDOffset:(unsigned long long)a2 service:(id)a3;
- (id)guid;
- (void).cxx_destruct;
- (id)recipient;
- (id)chatIdentifier;
- (id)loadMessagesBeforeDate:(id)a0 limit:(unsigned long long)a1 loadImmediately:(BOOL)a2;

@end
