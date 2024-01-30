@class MFMailMessageLibrary, MailAccount, MFMailboxUid;

@interface MFFakeLibraryMessage : MFLibraryMessage {
    MFMailboxUid *_mailboxUid;
    MFMailMessageLibrary *_library;
    MailAccount *_account;
}

+ (id)messageWithRFC822Data:(id)a0 mailboxUid:(id)a1 library:(id)a2 account:(id)a3;
+ (id)messageWithRFC822Data:(id)a0 mailboxUid:(id)a1 library:(id)a2;

- (id)library;
- (id)account;
- (id)mailbox;
- (void).cxx_destruct;
- (id)initWithMailboxUid:(id)a0 library:(id)a1 account:(id)a2;

@end
