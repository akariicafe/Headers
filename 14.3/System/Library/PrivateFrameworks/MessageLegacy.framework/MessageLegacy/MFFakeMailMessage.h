@class MailAccount, MFMailboxUid, MFMessageHeaders;

@interface MFFakeMailMessage : MFMailMessage

@property (retain, nonatomic) MFMessageHeaders *headers;
@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) MFMailboxUid *mailbox;

- (void).cxx_destruct;

@end
