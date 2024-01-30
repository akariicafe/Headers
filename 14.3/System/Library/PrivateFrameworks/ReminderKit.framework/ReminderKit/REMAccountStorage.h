@class NSString, REMCRMergeableOrderedSet, NSSet, REMResolutionTokenMap, REMObjectID, NSData;

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (retain, nonatomic) REMObjectID *objectID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (nonatomic) BOOL markedForRemoval;
@property (retain, nonatomic) NSSet *listIDsToUndelete;
@property (nonatomic) BOOL listsDADisplayOrderChanged;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (nonatomic) BOOL inactive;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didChooseToMigrateLocally;
@property (nonatomic) BOOL didFinishMigration;
@property (copy, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (nonatomic) BOOL daSupportsSharedCalendars;
@property (nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;

+ (id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)a0;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (id)listIDsMergeableOrderingReplicaIDSource;
- (id)cdKeyToStorageKeyMap;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (unsigned long long)storeGeneration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2;
- (id)debugDescription;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 listIDsMergeableOrdering:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
