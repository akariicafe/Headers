@class NSURL, NSMutableDictionary;

@interface MCMMigrationStatus : NSObject

@property (retain, nonatomic) NSMutableDictionary *migrationInfo;
@property (retain, nonatomic) NSURL *migrationFileURL;

+ (id)currentBuildVersion;

- (BOOL)hasMigrationOccurredForType:(id)a0;
- (id)initForSystemMigration;
- (id)initForMobileUserMigration;
- (BOOL)_writeMigrationStatusToDisk;
- (void)_migrateFromManyMarkerFilesToOneWithLibraryPath:(id)a0;
- (BOOL)isBuildUpgrade;
- (void)writeCurrentBuildInfoToDisk;
- (void)setMigrationCompleteForType:(id)a0;
- (void)_removeMarkerFileWithName:(id)a0 libraryPath:(id)a1;
- (id)_readMigrationStatusFromDisk;
- (id)init;
- (id)_iso8601DateFormatter;
- (void)_readStatusFromMarkerFileWithName:(id)a0 andSetAsType:(id)a1 libraryPath:(id)a2;
- (void).cxx_destruct;

@end
