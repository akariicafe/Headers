@protocol WLDataMigrationDelegate, WLDataMigratorProtocol;

@interface WLDataMigrationController : WLDaemonConnection {
    id<WLDataMigratorProtocol> _migrator;
}

@property (readonly, weak, nonatomic) id<WLDataMigrationDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)deleteMessages;
- (void)lookupAppDataContainer:(id /* block */)a0;
- (void)startMigrationUsingRetryPolicies:(BOOL)a0;

@end
