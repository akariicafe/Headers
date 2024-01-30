@class MFMailMessageLibrary;

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence

@property (weak, nonatomic) MFMailMessageLibrary *library;

- (BOOL)moveSupportedFromMailboxURL:(id)a0 toURL:(id)a1;
- (id)initWithDatabase:(id)a0;
- (id)messageForDatabaseID:(long long)a0;
- (id)initWithDatabase:(id)a0 gmailLabelPersistence:(id)a1;
- (id)initWithLibrary:(id)a0 database:(id)a1;
- (long long)mailboxDatabaseIDForURL:(id)a0;
- (id)labelNameForLabelID:(long long)a0;
- (void)handledFailedCopyForMessages:(id)a0;
- (id)mailboxURLForDatabaseID:(long long)a0;
- (void).cxx_destruct;

@end
