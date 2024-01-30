@protocol WLDataMigrationDelegate, WLDataMigratorProtocol;

@interface WLDataMigrationController : WLDaemonConnection {
    id<WLDataMigratorProtocol> _migrator;
}

@property (readonly, weak, nonatomic) id<WLDataMigrationDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startMigrationUsingRetryPolicies:(BOOL)a0;

@end
