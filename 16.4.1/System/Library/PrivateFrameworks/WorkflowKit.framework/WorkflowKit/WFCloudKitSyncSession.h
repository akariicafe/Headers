@interface WFCloudKitSyncSession : NSObject

@property (class, nonatomic, getter=isWalrusEnabled) BOOL walrusEnabled;
@property (class, nonatomic, getter=isWalrusForcedEnabled) BOOL walrusForcedEnabled;
@property (class, nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property (class, nonatomic) BOOL zoneWasPurged;
@property (class, nonatomic) BOOL ignoresUserDeletedZoneErrors;
@property (class, nonatomic) BOOL voiceShortcutMigrationDidRun;
@property (class, nonatomic) BOOL voiceShortcutMigrationDidSync;
@property (class, nonatomic) long long defaultShortcutsVersion;
@property (class, readonly, nonatomic) long long currentDefaultShortcutsVersion;
@property (class, readonly, nonatomic) BOOL needsDefaultShortcutUpdate;
@property (class, readonly) long long syncedFlagsHash;
@property (class, nonatomic) long long lastSyncedFlagsHash;

+ (void)initialize;
+ (void)resolveWalrusStatus;
+ (void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(id /* block */)a0;

- (id)applyConflictResolution:(id)a0 inDatabase:(id)a1;

@end
