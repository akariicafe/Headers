@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (id)constraintsName;
- (long long)sourceType;
- (id)syncError;
- (int)flags;
- (id)UUID;
- (void)setLastSyncStartDate:(id)a0;
- (int)managedConfigurationAccountAccess;
- (void)setSyncError:(id)a0;
- (id)externalID;
- (void)setLastSyncEndDate:(id)a0;
- (id)lastSyncStartDate;
- (id)title;
- (id)delegatedAccountOwnerStoreID;
- (id)lastSyncEndDate;
- (id)defaultAlarmOffset;
- (id)meltedObjectInStore:(id)a0;

@end
