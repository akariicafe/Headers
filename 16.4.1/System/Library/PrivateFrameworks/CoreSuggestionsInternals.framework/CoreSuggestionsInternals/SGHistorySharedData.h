@class NSDate, NSArray, NSMutableSet, NSData, NSMutableArray, NSUbiquitousKeyValueStore;

@interface SGHistorySharedData : NSObject {
    NSMutableSet *confirmedEventHashes;
    NSMutableSet *confirmedEventWithoutTimestampHashes;
    NSMutableSet *rejectedEventHashes;
    NSMutableSet *confirmedReminderHashes;
    NSMutableSet *rejectedReminderHashes;
    NSMutableSet *contactHashes;
    NSMutableSet *confirmedEventFieldHashes;
    NSMutableSet *confirmedEventWithoutTimestampFieldHashes;
    NSMutableSet *storageDetailHashes;
    NSMutableSet *dontUpdate;
    NSArray *resetInfo;
    NSMutableArray *observers;
    NSData *cachedSalt;
    NSData *cachedSaltLegacyManatee;
    NSUbiquitousKeyValueStore *migrateFromStore;
    BOOL isMigrating;
    NSDate *lastMigrationAttempt;
}

- (void).cxx_destruct;

@end
