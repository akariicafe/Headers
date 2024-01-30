@class CallHistoryDBClientHandle;

@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable

@property (class, readonly, nonatomic) CHDatabaseClientHandleManager *sharedInstance;

@property (readonly, weak, nonatomic) CallHistoryDBClientHandle *databaseClientHandle;

- (id)init;
- (void).cxx_destruct;

@end
