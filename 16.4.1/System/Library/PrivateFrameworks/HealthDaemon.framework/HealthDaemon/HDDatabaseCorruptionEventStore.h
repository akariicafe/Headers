@protocol HDDatabaseCorruptionEventStoreDelegate;

@interface HDDatabaseCorruptionEventStore : NSObject

@property (weak, nonatomic) id<HDDatabaseCorruptionEventStoreDelegate> delegate;

+ (id)TTREventKeyForProfileIdentifier:(id)a0 component:(long long)a1;
+ (id)corruptionEventKeyForProfileIdentifier:(id)a0 component:(long long)a1;
+ (id)outOfSpaceEventKey;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)persistMigrationFailureEventForProfile:(id)a0 component:(long long)a1 schemaVersion:(long long)a2;
- (id)dateOfMostRecentDeviceOutOfSpaceEvent;
- (id)dateOfMostRecentObliteration:(id *)a0;
- (id)mostRecentCorruptionEventForProfileIdentifier:(id)a0 component:(long long)a1;
- (id)mostRecentMigrationFailureEventForProfile:(id)a0 component:(long long)a1 schemaVersion:(long long *)a2;
- (id)mostRecentTTRAttemptForProfileIdentifier:(id)a0 component:(long long)a1;
- (void)persistCorruptionEvent:(id)a0;
- (void)persistDeviceOutOfSpaceEvent;
- (void)persistObliterationForReason:(id)a0;
- (void)persistTTRAttempt:(id)a0 forProfileIdentifier:(id)a1 component:(long long)a2;

@end
