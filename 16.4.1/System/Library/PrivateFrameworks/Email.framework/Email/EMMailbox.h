@class EMMailboxRepository, NSString, EMReceivingAccount, EMMailboxCollection, EMObjectID, EMMailboxObjectID, NSURL;

@interface EMMailbox : EMRepositoryObject <EMMailboxBuilder, NSSecureCoding, EFPubliclyDescribable> {
    EMReceivingAccount *_account;
    BOOL _descriptionUsesRealName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) EMMailbox *parent;
@property (readonly, nonatomic) EMMailboxObjectID *parentID;
@property (retain, nonatomic) EMMailboxCollection *children;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long type;
@property (nonatomic) BOOL canContainMessages;
@property (nonatomic) BOOL canArchive;
@property (retain, nonatomic) EMMailboxRepository *repository;
@property (readonly, copy, nonatomic) EMMailboxObjectID *objectID;
@property (readonly, nonatomic) EMReceivingAccount *account;
@property (readonly, nonatomic) EMObjectID *accountIdentifier;
@property (readonly, copy, nonatomic) NSString *redactedName;
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) BOOL isTopLevelMailbox;
@property (readonly, nonatomic) BOOL isSmartMailbox;
@property (readonly, nonatomic) BOOL isInboxMailbox;
@property (readonly, nonatomic) BOOL isDraftsMailbox;
@property (readonly, nonatomic) BOOL isOutgoingMailbox;
@property (readonly, nonatomic) BOOL isSentMailbox;
@property (readonly, nonatomic) BOOL isSendLaterMailbox;
@property (readonly, nonatomic) BOOL supportsSelectAll;
@property (readonly, nonatomic) BOOL shouldArchiveByDefault;
@property (nonatomic) BOOL descriptionUsesRealName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

+ (BOOL)typeIsValidTransferDestination:(long long)a0;
+ (BOOL)deleteMovesToTrashForMailboxes:(id)a0;
+ (id)sortDescriptorForNameAscending:(BOOL)a0;
+ (BOOL)_isOutgoingMailboxType:(long long)a0;
+ (id)_predicateForSmartMailboxes:(BOOL)a0;
+ (id)predicateForMailboxAccount:(id)a0;
+ (id)predicateForMailboxAccount:(id)a0 topLevelOnly:(BOOL)a1;
+ (id)predicateForMailboxAccountIdentifier:(id)a0 topLevelOnly:(BOOL)a1;
+ (id)predicateForMailboxChildren:(id)a0;
+ (id)predicateForMailboxName:(id)a0;
+ (id)predicateForMailboxType:(long long)a0;
+ (id)predicateForPrimaryMailboxWithAccount:(id)a0;
+ (id)predicateForRegularMailboxes;
+ (id)predicateForSmartMailboxes;
+ (id)predicateForTopLevelMailboxes;
+ (BOOL)shouldArchiveByDefaultForMailboxes:(id)a0;
+ (id)sortDescriptorForDisplayOrder;
+ (BOOL)supportsArchivingForMailboxes:(id)a0;
+ (BOOL)supportsSelectAllForMailboxes:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0;
- (id)initWithObjectID:(id)a0 repository:(id)a1 name:(id)a2 accountIdentifier:(id)a3 type:(long long)a4 builder:(id /* block */)a5;
- (BOOL)_canArchiveForMailboxType:(long long)a0;
- (void)_commonInitName:(id)a0 accountIdentifier:(id)a1 type:(long long)a2 canContainMessages:(BOOL)a3 children:(id)a4 parentID:(id)a5 builder:(id /* block */)a6;
- (BOOL)_shouldArchiveByDefault;
- (id)initWithObjectID:(id)a0 name:(id)a1 accountIdentifier:(id)a2 type:(long long)a3 builder:(id /* block */)a4;
- (void)setParentFromMailboxes:(id)a0;

@end
