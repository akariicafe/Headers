@class MFMailboxUid, MFMessageHeaders, NSString, MailAccount;

@interface MFFakeMailMessage : MFMailMessage {
    NSString *_persistentID;
}

@property (retain, nonatomic) MFMessageHeaders *fakeHeaders;
@property (retain, nonatomic) MFMessageHeaders *headers;
@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) MFMailboxUid *mailbox;

- (void).cxx_destruct;
- (id)init;
- (id)persistentID;
- (long long)mailboxID;

@end
