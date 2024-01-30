@protocol HDDatabaseCorruptionEventStoreDelegate;

@interface HDDatabaseCorruptionEventStore : NSObject

@property (weak, nonatomic) id<HDDatabaseCorruptionEventStoreDelegate> delegate;

+ (id)corruptionEventKeyForProfileIdentifier:(id)a0 component:(long long)a1;
+ (id)TTREventKeyForProfileIdentifier:(id)a0 component:(long long)a1;
+ (id)outOfSpaceEventKey;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)mostRecentTTRAttemptForProfileIdentifier:(id)a0 component:(long long)a1;
- (void)persistTTRAttempt:(id)a0 forProfileIdentifier:(id)a1 component:(long long)a2;
- (id)mostRecentCorruptionEventForProfileIdentifier:(id)a0 component:(long long)a1;
- (id)dateOfMostRecentDeviceOutOfSpaceEvent;
- (id)mostRecentMigrationFailureEventForProfile:(id)a0 component:(long long)a1 schemaVersion:(long long *)a2;
- (void)persistMigrationFailureEventForProfile:(id)a0 component:(long long)a1 schemaVersion:(long long)a2;
- (id)dateOfMostRecentObliteration:(id *)a0;
- (void)persistCorruptionEvent:(id)a0;
- (void)persistDeviceOutOfSpaceEvent;
- (void)persistObliterationForReason:(id)a0;

@end
