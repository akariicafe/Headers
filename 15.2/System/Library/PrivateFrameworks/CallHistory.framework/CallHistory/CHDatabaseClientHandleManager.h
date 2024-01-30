@class CallHistoryDBClientHandle;

@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable

@property (class, readonly, nonatomic) CHDatabaseClientHandleManager *sharedInstance;

@property (readonly, weak, nonatomic) CallHistoryDBClientHandle *databaseClientHandle;

- (void).cxx_destruct;
- (id)init;

@end
