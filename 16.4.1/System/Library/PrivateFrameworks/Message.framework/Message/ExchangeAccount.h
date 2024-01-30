@interface ExchangeAccount : IMAPAccount

+ (id)accountTypeString;

- (Class)connectionClass;
- (id)_defaultSpecialMailboxNameForType:(int)a0;
- (void)_filterMailboxList:(id)a0 forMailboxWithPath:(id)a1 iisServer:(id)a2;
- (BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (void)filterMailboxList:(id)a0 forMailbox:(id)a1 options:(int)a2;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)storeDraftsOnServer;
- (BOOL)storeSentMessagesOnServer;

@end
