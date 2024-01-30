@class MFMailboxUid, NSString, MFMessage, DAMailMessage;

@interface MFDAMessage : MFMailMessage {
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property (readonly, nonatomic) DAMailMessage *DAMailMessage;

- (id)headers;
- (id)messageBody;
- (id)mailbox;
- (void).cxx_destruct;
- (unsigned long long)messageSize;
- (id)remoteID;
- (unsigned long long)messageFlags;
- (id)headersIfAvailable;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (id)initWithDAMailMessage:(id)a0 mailbox:(id)a1;

@end
