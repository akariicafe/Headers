@interface LocalAccount : MailAccount

+ (id)accountTypeString;
+ (id)localAccount;
+ (id)csAccountTypeString;
+ (id)accountTypeIdentifier;
+ (id)defaultPathNameForAccountWithHostname:(id)a0 username:(id)a1;

- (id)uniqueId;
- (BOOL)canGoOffline;
- (void)setHostname:(id)a0;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (void)resetSpecialMailboxes;
- (void)setPassword:(id)a0;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_URLScheme;
- (id)primaryMailboxUid;
- (Class)storeClass;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1 parent:(id)a2;
- (id)mailboxPathExtension;
- (id)_infoForMatchingURL:(id)a0;
- (id)pushedMailboxUids;
- (BOOL)supportsPurge;
- (BOOL)isActive;
- (void)setUsername:(id)a0;
- (BOOL)_setChildren:(id)a0 forMailboxUid:(id)a1;
- (BOOL)supportsAppend;
- (id)transientDraftsFolderShouldCreate:(BOOL)a0;
- (BOOL)_shouldConfigureMailboxCache;
- (id)mailboxUidForFileSystemPath:(id)a0;
- (id)transientDraftsFolder;
- (BOOL)deleteInPlaceForMailbox:(id)a0;
- (BOOL)supportsArchiving;
- (BOOL)canFetch;
- (id)displayName;

@end
