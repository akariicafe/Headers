@class MFMailboxUid, MFMessageHeaders, NSString, MailAccount;

@interface MFFakeMailMessage : MFMailMessage {
    NSString *_persistentID;
}

@property (retain, nonatomic) MFMessageHeaders *fakeHeaders;
@property (retain, nonatomic) MFMessageHeaders *headers;
@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) MFMailboxUid *mailbox;

- (id)init;
- (void).cxx_destruct;
- (long long)mailboxID;
- (id)persistentID;

@end
