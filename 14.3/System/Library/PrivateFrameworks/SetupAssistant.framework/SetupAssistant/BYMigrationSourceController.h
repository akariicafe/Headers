@class BYBuddyDaemonMigrationSourceClient;

@interface BYMigrationSourceController : NSObject

@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient;

- (id)init;
- (void).cxx_destruct;
- (void)setFileTransferSession:(id)a0;
- (void)launchSetupForMigration:(id)a0;

@end
