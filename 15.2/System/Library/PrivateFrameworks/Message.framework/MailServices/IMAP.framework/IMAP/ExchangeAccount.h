@interface ExchangeAccount : IMAPAccount

+ (id)accountTypeString;

- (Class)connectionClass;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (id)_defaultSpecialMailboxNameForType:(int)a0;
- (void)_filterMailboxList:(id)a0 forMailboxWithPath:(id)a1 iisServer:(id)a2;
- (BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (BOOL)storeDraftsOnServer;
- (BOOL)storeSentMessagesOnServer;
- (void)filterMailboxList:(id)a0 forMailbox:(id)a1 options:(int)a2;

@end
