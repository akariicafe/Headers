@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (long long)sourceType;
- (BOOL)disabled;
- (void)setLastSyncError:(unsigned long long)a0;
- (id)constraintsName;
- (id)UUID;
- (id)title;
- (int)flags;
- (id)meltedObjectInStore:(id)a0;
- (id)lastSyncEndDate;
- (void)setLastSyncEndDate:(id)a0;
- (unsigned long long)lastSyncError;
- (id)defaultAlarmOffset;
- (id)externalID;
- (id)lastSyncStartDate;
- (void)setLastSyncStartDate:(id)a0;
- (id)delegatedAccountOwnerStoreID;

@end
