@class REMDatabaseMigrationContext, NSString, REMStore;

@interface CalDefaultReminderKitDatabaseMigrationContext : NSObject <CalReminderKitDatabaseMigrationContext>

@property (readonly, nonatomic) REMDatabaseMigrationContext *remDatabaseMigrationContext;
@property (readonly, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didEndMigrationWithSuccess:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)ensureAccountsExist:(id)a0 error:(id *)a1;
- (void)recordMigrationFailure:(id)a0;
- (void)willBeginMigration;

@end
