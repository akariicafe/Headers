@class MFMailboxUidTransformer;

@interface MFMailboxProvider : EDMailboxProvider

@property (retain, nonatomic) MFMailboxUidTransformer *mailboxUidTransformer;

- (id)_transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;
- (void)_fetchMailboxesForAccount:(id)a0;
- (id)initWithAccountsProvider:(id)a0;
- (void)test_tearDown;
- (id)legacyMailboxForObjectID:(id)a0;
- (void).cxx_destruct;

@end
