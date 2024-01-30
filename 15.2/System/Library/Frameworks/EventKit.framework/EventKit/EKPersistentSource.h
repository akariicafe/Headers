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

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (int)flags2;
- (int)entityType;
- (void)setSourceType:(long long)a0;
- (void)setFlags2:(int)a0;
- (void)setDisabled:(BOOL)a0;
- (id)ownerName;
- (long long)sourceType;
- (BOOL)disabled;
- (int)strictestEventPrivateValueRaw;
- (void)setExternalID:(id)a0;
- (BOOL)onlyCreatorCanModify;
- (void)setLastSyncError:(unsigned long long)a0;
- (id)constraintsName;
- (void)setConstraintsName:(id)a0;
- (void)setDelegatedAccountOwnerStoreID:(id)a0;
- (id)defaultAllDayAlarmOffset;
- (void)setOwnerName:(id)a0;
- (id)creatorCodeSigningIdentity;
- (id)title;
- (int)displayOrder;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (void)setDisplayOrder:(int)a0;
- (id)lastSyncErrorData;
- (BOOL)showsNotifications;
- (void)setDefaultAlarmOffset:(id)a0;
- (id)description;
- (int)preferredEventPrivateValueRaw;
- (int)flags;
- (void)setCreatorBundleID:(id)a0;
- (id)lastSyncEndDate;
- (void).cxx_destruct;
- (void)setLastSyncEndDate:(id)a0;
- (unsigned long long)lastSyncError;
- (id)externalModificationTag;
- (id)constraints;
- (void)setLastSyncErrorData:(id)a0;
- (void)setExternalModificationTag:(id)a0;
- (void)setShowsNotifications:(BOOL)a0;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (id)defaultAlarmOffset;
- (id)propertyKeyForUniqueIdentifier;
- (id)externalID;
- (void)setOnlyCreatorCanModify:(BOOL)a0;
- (void)setTitle:(id)a0;
- (id)lastSyncStartDate;
- (void)setCreatorCodeSigningIdentity:(id)a0;
- (id)creatorBundleID;
- (void)setLastSyncStartDate:(id)a0;
- (id)delegatedAccountOwnerStoreID;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (void)setFlags:(int)a0;

@end
