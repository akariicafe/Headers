@class NSObject;
@protocol OS_dispatch_queue;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL unlocked;
@property (nonatomic) BOOL foundExtensions;
@property (nonatomic) BOOL finishedDataMigration;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (id)sharedInstance;

- (void)_finishMigration;
- (void)_didFindExtensions:(id)a0;
- (void)registerHandlerWithEventMonitor:(id)a0;
- (void)unlock;
- (void)suspendMigrationQueue;
- (void)dealloc;
- (void)resumeMigrationQueue;
- (id)init;
- (void)monitorDataMigrationWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
