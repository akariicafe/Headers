@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (long long)sourceType;
- (id)lastSyncStartDate;
- (unsigned long long)lastSyncError;
- (id)defaultAlarmOffset;
- (void)setLastSyncStartDate:(id)a0;
- (void)setLastSyncError:(unsigned long long)a0;
- (id)meltedObjectInStore:(id)a0;
- (id)delegatedAccountOwnerStoreID;
- (id)lastSyncEndDate;
- (void)setLastSyncEndDate:(id)a0;
- (id)UUID;
- (int)flags;
- (id)externalID;
- (id)title;

@end
