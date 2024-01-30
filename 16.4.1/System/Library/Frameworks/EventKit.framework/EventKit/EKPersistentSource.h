@class NSString, NSNumber, EKFrozenReminderSource;

@interface EKPersistentSource : EKPersistentObject

@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (nonatomic) int strictestEventPrivateValue;
@property (retain, nonatomic) NSString *UUID;
@property (retain) EKFrozenReminderSource *reminderSource;

+ (id)relations;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (int)displayOrder;
- (void)setDisplayOrder:(int)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)ownerName;
- (int)entityType;
- (void)setCreatorCodeSigningIdentity:(id)a0;
- (void)setOwnerName:(id)a0;
- (id)cachedExternalInfoData;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)a0;
- (void)setFlags:(int)a0;
- (id)constraints;
- (int)flags2;
- (void)setFlags2:(int)a0;
- (void)setDelegatedAccountOwnerStoreID:(id)a0;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (id)constraintsName;
- (void)setCreatorBundleID:(id)a0;
- (long long)sourceType;
- (void)setConstraintsName:(id)a0;
- (id)syncError;
- (int)flags;
- (id)creatorBundleID;
- (void)setLastSyncStartDate:(id)a0;
- (void)setSourceType:(long long)a0;
- (id)creatorCodeSigningIdentity;
- (void)setNotes:(id)a0;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (void)setExternalID:(id)a0;
- (int)managedConfigurationAccountAccess;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (int)strictestEventPrivateValueRaw;
- (void)setDefaultAlarmOffset:(id)a0;
- (BOOL)showsNotifications;
- (void)setSyncError:(id)a0;
- (id)externalID;
- (void)setLastSyncEndDate:(id)a0;
- (void)setShowsNotifications:(BOOL)a0;
- (id)lastSyncStartDate;
- (id)notes;
- (id)externalModificationTag;
- (id)title;
- (id)description;
- (void)setCachedExternalInfoData:(id)a0;
- (int)preferredEventPrivateValueRaw;
- (id)delegatedAccountOwnerStoreID;
- (void)setTitle:(id)a0;
- (id)lastSyncEndDate;
- (void).cxx_destruct;
- (BOOL)onlyCreatorCanModify;
- (id)defaultAlarmOffset;
- (void)setOnlyCreatorCanModify:(BOOL)a0;
- (id)defaultAllDayAlarmOffset;

@end
