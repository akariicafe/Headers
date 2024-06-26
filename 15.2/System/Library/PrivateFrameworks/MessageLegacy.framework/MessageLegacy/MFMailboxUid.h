@class MFInvocationQueue, NSString, NSArray, MailAccount, NSMutableDictionary, NSMutableArray, MFWeakReferenceHolder, NSNumber, MFMessageCriterion;

@interface MFMailboxUid : NSObject <NSCopying, EFPubliclyDescribable> {
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
}

@property (readonly, nonatomic) MFInvocationQueue *attachmentDownloadQueue;
@property (retain, nonatomic) NSArray *extraAttributes;
@property (readonly, nonatomic) unsigned long long suggestionsLostMessageSearchResultCount;
@property (readonly, nonatomic) double suggestionsLostMessageSearchTimestamp;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specialNameForType:(int)a0;
+ (BOOL)isStandardizedMailboxUidType:(int)a0;
+ (BOOL)isSentMailboxType:(int)a0;
+ (BOOL)isOutgoingMailboxType:(int)a0;
+ (id)fileURLForMailboxURL:(id)a0;
+ (BOOL)isDraftsMailboxType:(int)a0;
+ (BOOL)typeIsValidTransferDestination:(int)a0;

- (id)uniqueId;
- (BOOL)setChildren:(id)a0;
- (id)displayName;
- (BOOL)isContainer;
- (id)fullPath;
- (id)_dictionaryRepresentation;
- (BOOL)isVisible;
- (id)initWithAccount:(id)a0;
- (id)parent;
- (id)account;
- (id)children;
- (id)criterion;
- (id)URLString;
- (void)setName:(id)a0;
- (void)setParent:(id)a0;
- (BOOL)isStore;
- (void)setAttributes:(unsigned int)a0;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (id)_loadUserInfo;
- (unsigned long long)numberOfChildren;
- (id)init;
- (unsigned long long)unreadCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCriterion:(id)a0;
- (void)invalidate;
- (BOOL)isShared;
- (id)URL;
- (id)store;
- (id)name;
- (int)type;
- (void)dealloc;
- (void)setType:(int)a0;
- (void)removeChild:(id)a0;
- (unsigned int)attributes;
- (id)dictionaryRepresentation;
- (unsigned int)mailboxID;
- (BOOL)isValid;
- (id)_mutableChildren;
- (id)_privacySafeDescription;
- (id)rootMailbox;
- (void)setRepresentedAccount:(id)a0;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)initWithName:(id)a0 attributes:(unsigned int)a1 forAccount:(id)a2 extraAttributes:(id)a3;
- (BOOL)mergeWithUserInfo:(id)a0;
- (void)saveUserInfo;
- (void)flushCriteria;
- (id)userInfoObjectForKey:(id)a0;
- (id)mutableDictionaryRepresentation;
- (unsigned long long)serverUnreadOnlyOnServerCount;
- (unsigned long long)unreadCountMatchingCriterion:(id)a0;
- (id)childWithName:(id)a0;
- (id)mutableCopyOfChildren;
- (BOOL)isStandardizedMailboxUid;
- (id)depthFirstEnumerator;
- (id)accountRelativePath;
- (id)childWithExtraAttribute:(id)a0;
- (BOOL)hasChildren;
- (id)pathRelativeToMailbox:(id)a0;
- (id)_initWithName:(id)a0 attributes:(unsigned int)a1 forAccount:(id)a2;
- (id)representedAccount;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)a0;
- (unsigned long long)numberOfDescendants;
- (id)URLStringNonNil;
- (id)fullPathNonNil;
- (id)topMailbox;
- (id)ancestralAccount;
- (void)addToPostOrderTraversal:(id)a0;
- (id)displayNameUsingSpecialNames;
- (id)accountDisplayName;
- (unsigned long long)nonDeletedCount;
- (long long)statusCountDelta;
- (void)updateMostRecentStatusCount:(unsigned long long)a0;
- (BOOL)shouldUseNonDeletedForUnreadCount;
- (id)childEnumerator;
- (id)childAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfChild:(id)a0;
- (id)descendantWithExtraAttribute:(id)a0;
- (void)sortChildren;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isSentMailboxUid;
- (BOOL)isOutgoingMailboxUid;
- (BOOL)isNotesMailboxUid;
- (id)realFullPath;
- (id)pathRelativeToMailboxForDisplay:(id)a0;
- (id)oldURLString;
- (long long)compareWithMailboxUid:(id)a0;
- (long long)indexToInsertChildMailboxUid:(id)a0;
- (BOOL)isDescendantOfMailbox:(id)a0;
- (BOOL)userInfoBoolForKey:(id)a0;
- (void)setUserInfoBool:(BOOL)a0 forKey:(id)a1;
- (id)userInfoDictionary;
- (void)setUserInfoWithDictionary:(id)a0;
- (id)userInfoForSerialization;
- (BOOL)alwaysWriteFullMessageFile;
- (void)updateSuggestionsLostMessageSearchResultCount:(unsigned long long)a0;
- (id)tildeAbbreviatedPath;
- (id)URLStringWithAccount:(id)a0;
- (id)lastViewedMessageID;
- (id)lastViewedMessageDate;
- (void)setLastViewedMessageID:(id)a0;

@end
