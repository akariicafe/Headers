@interface LocalAccount : MailAccount

@property (class, readonly, nonatomic) LocalAccount *localAccount;

+ (id)accountTypeString;
+ (id)csAccountTypeString;
+ (id)legacyPathNameForAccountWithHostname:(id)a0 username:(id)a1;
+ (id)accountTypeIdentifier;

- (id)uniqueID;
- (BOOL)canGoOffline;
- (void)setHostname:(id)a0;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (void)resetSpecialMailboxes;
- (void)setPassword:(id)a0;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_URLScheme;
- (id)mailboxUidForRelativePath:(id)a0 create:(BOOL)a1 withOption:(int)a2;
- (id)primaryMailboxUid;
- (BOOL)isLocalAccount;
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
- (id)legacySQLExpressionToMatchAllMailboxes;
- (BOOL)_shouldConfigureMailboxCache;
- (id)mailboxUidForFileSystemPath:(id)a0;
- (id)transientDraftsFolder;
- (BOOL)deleteInPlaceForMailbox:(id)a0;
- (BOOL)supportsArchiving;
- (BOOL)canFetch;
- (id)displayName;

@end
