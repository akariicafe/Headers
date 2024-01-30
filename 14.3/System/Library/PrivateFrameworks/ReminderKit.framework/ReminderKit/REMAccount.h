@class NSData, NSString, REMObjectID, REMCRMergeableOrderedSet, NSSet, REMResolutionTokenMap, REMAccountCapabilities, REMStore, REMAccountStorage, NSOrderedSet, REMAccountGroupContext;

@interface REMAccount : NSObject <REMObjectIDProviding, REMExternalSyncMetadataProviding>

@property (class, readonly, nonatomic) REMObjectID *localInternalAccountID;
@property (class, readonly, nonatomic) REMObjectID *localAccountID;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (nonatomic) BOOL markedForRemoval;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSSet *listIDsToUndelete;
@property (readonly, nonatomic) BOOL listsDADisplayOrderChanged;
@property (retain, nonatomic) REMStore *store;
@property (readonly, copy, nonatomic) REMAccountStorage *storage;
@property (retain, nonatomic) REMAccountCapabilities *capabilities;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSOrderedSet *listIDsOrdering;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL inactive;
@property (readonly, nonatomic) BOOL didChooseToMigrate;
@property (readonly, nonatomic) BOOL didChooseToMigrateLocally;
@property (readonly, nonatomic) BOOL didFinishMigration;
@property (readonly, nonatomic) NSString *daConstraintsDescriptionPath;
@property (readonly, nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (readonly, nonatomic) BOOL daSupportsPhoneNumbers;
@property (readonly, nonatomic) BOOL daSupportsSharedCalendars;
@property (readonly, nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) BOOL supportsSharingLists;
@property (readonly, nonatomic) REMAccountGroupContext *groupContext;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSString *daSyncToken;
@property (readonly, nonatomic) NSString *daPushKey;

+ (id)_accountTypeMaskWithBitMask:(long long)a0;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)externalIdentifierForMarkedForDeletionObject;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)isConsideredEmptyWithResultPtr:(BOOL *)a0 withError:(id *)a1;
- (BOOL)MCIsManagedWithResultPtr:(BOOL *)a0 error:(id *)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)fetchListsWithError:(id *)a0;
- (id)initWithStore:(id)a0 storage:(id)a1;
- (id)fetchListsIncludingSpecialContainersWithError:(id *)a0;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)canCopyReminderLosslesslyToAccount:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
