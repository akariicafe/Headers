@class MFMailboxUid, NSString, MFMessage, DAMailMessage;

@interface MFDAMessage : MFMailMessage {
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property (readonly, nonatomic) DAMailMessage *DAMailMessage;

- (BOOL)messageData:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (BOOL)messageDataHolder:(id *)a0 messageSize:(unsigned long long *)a1 isComplete:(BOOL *)a2 downloadIfNecessary:(BOOL)a3;
- (void).cxx_destruct;
- (id)messageBody;
- (id)initWithDAMailMessage:(id)a0 mailbox:(id)a1;
- (id)mailbox;
- (unsigned long long)messageFlags;
- (id)headersIfAvailable;
- (id)headers;
- (id)remoteID;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (unsigned long long)messageSize;

@end
