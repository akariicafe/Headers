@class BYBuddyDaemonMigrationSourceClient;

@interface BYMigrationSourceController : NSObject

@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient;

- (void)setFileTransferSession:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)launchSetupForMigration:(id)a0;

@end
