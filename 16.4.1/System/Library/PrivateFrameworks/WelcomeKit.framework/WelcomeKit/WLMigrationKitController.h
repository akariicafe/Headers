@protocol WLDataMigrationDelegate;

@interface WLMigrationKitController : WLDaemonConnection

@property (weak, nonatomic) id<WLDataMigrationDelegate> delegate;

- (void)cancel;
- (void).cxx_destruct;
- (void)run:(id)a0;
- (void)daemonDidGetInterrupted;

@end
