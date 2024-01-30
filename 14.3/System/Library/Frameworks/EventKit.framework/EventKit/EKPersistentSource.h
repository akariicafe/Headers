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

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)meltedClass;

- (void)setOnlyCreatorCanModify:(BOOL)a0;
- (void)setLastSyncErrorData:(id)a0;
- (void)setCreatorBundleID:(id)a0;
- (void)setFlags2:(int)a0;
- (void)setConstraintsName:(id)a0;
- (BOOL)showsNotifications;
- (id)constraintsName;
- (int)flags2;
- (id)creatorBundleID;
- (id)lastSyncErrorData;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (void)setDefaultAlarmOffset:(id)a0;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (int)strictestEventPrivateValueRaw;
- (void)setShowsNotifications:(BOOL)a0;
- (BOOL)disabled;
- (id)constraints;
- (long long)sourceType;
- (void)setDisabled:(BOOL)a0;
- (id)lastSyncStartDate;
- (unsigned long long)lastSyncError;
- (id)defaultAlarmOffset;
- (void)setLastSyncStartDate:(id)a0;
- (BOOL)onlyCreatorCanModify;
- (void)setSourceType:(long long)a0;
- (void)setLastSyncError:(unsigned long long)a0;
- (int)entityType;
- (void)setExternalModificationTag:(id)a0;
- (id)delegatedAccountOwnerStoreID;
- (id)lastSyncEndDate;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (void)setLastSyncEndDate:(id)a0;
- (void).cxx_destruct;
- (int)preferredEventPrivateValueRaw;
- (id)description;
- (int)flags;
- (void)setTitle:(id)a0;
- (id)externalID;
- (id)creatorCodeSigningIdentity;
- (void)setCreatorCodeSigningIdentity:(id)a0;
- (void)setDelegatedAccountOwnerStoreID:(id)a0;
- (id)title;
- (void)setFlags:(int)a0;

@end
