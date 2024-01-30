@class NSRecursiveLock, NSMutableDictionary, NSString, NSObject, NSCache;
@protocol OS_os_log;

@interface ASCTaskCoordinator : NSObject

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSRecursiveLock *consistencyLock;
@property (readonly, nonatomic) NSMutableDictionary *pendingResults;
@property (readonly, nonatomic) NSCache *loadedResults;
@property (readonly, copy, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)withLock:(id /* block */)a0;
- (BOOL)hasTaskForKey:(id)a0;
- (void)removeAllFinishedTasks;
- (void)removeTaskForKey:(id)a0;
- (id)taskForKey:(id)a0;
- (void)taskForKey:(id)a0 didCompleteWithResult:(id)a1;
- (void)taskForKey:(id)a0 didFailWithError:(id)a1;
- (id)taskForKey:(id)a0 withCreatorBlock:(id /* block */)a1;

@end
