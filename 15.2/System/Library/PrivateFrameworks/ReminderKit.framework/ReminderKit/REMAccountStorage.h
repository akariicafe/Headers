@class NSString, REMCRMergeableOrderedSet, NSSet, REMResolutionTokenMap, REMObjectID, NSData;

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding> {
    unsigned long long _storeGeneration;
    unsigned long long _copyGeneration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isAddingNonPrimaryCKAccountForTesting;
    long long minimumSupportedVersion;
    long long effectiveMinimumSupportedVersion;
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
@property (retain, nonatomic) NSSet *smartListIDsToUndelete;
@property (nonatomic) BOOL listsDADisplayOrderChanged;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (nonatomic) BOOL inactive;
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didChooseToMigrateLocally;
@property (nonatomic) BOOL didFinishMigration;
@property (nonatomic) long long persistenceCloudSchemaVersion;
@property (copy, nonatomic) NSString *daConstraintsDescriptionPath;
@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (nonatomic) BOOL daSupportsSharedCalendars;
@property (nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *daSyncToken;
@property (copy, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;

+ (id)objectIDWithUUID:(id)a0;
+ (id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)a0;
+ (id)newObjectID;

- (void)setStoreGenerationIfNeeded:(unsigned long long)a0;
- (void)setEffectiveMinimumSupportedVersion:(long long)a0;
- (unsigned long long)storeGeneration;
- (void)setMinimumSupportedVersion:(long long)a0;
- (BOOL)isUnsupported;
- (id)cdKeyToStorageKeyMap;
- (id)optionalObjectID;
- (BOOL)_isAddingNonPrimaryCKAccountForTesting;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)listIDsMergeableOrderingReplicaIDSource;
- (unsigned long long)hash;
- (void)_setIsAddingNonPrimaryCKAccountForTesting:(BOOL)a0;
- (id)debugDescription;
- (id)initWithObjectID:(id)a0 type:(long long)a1 name:(id)a2 listIDsMergeableOrdering:(id)a3;

@end
