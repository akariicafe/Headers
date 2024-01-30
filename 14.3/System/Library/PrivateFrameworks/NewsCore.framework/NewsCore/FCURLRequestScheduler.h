@class NSURLSession, NSMapTable, NSMutableOrderedSet, NSDate, NFUnfairLock;

@interface FCURLRequestScheduler : NSObject

@property (readonly, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) NSMutableOrderedSet *requests;
@property (readonly, nonatomic) NSMapTable *inFlightURLTasks;
@property (readonly, nonatomic) unsigned long long maxInFlightURLTasks;
@property (readonly, nonatomic) unsigned long long maxInFlightLowPriorityURLTasks;
@property (readonly, nonatomic) NFUnfairLock *lock;
@property (copy, nonatomic) NSDate *dateOfLastProgress;

- (void).cxx_destruct;
- (void)_suspendURLTaskForRequest:(id)a0;
- (void)_resumeURLTaskForRequest:(id)a0;
- (void)_cancelRequest:(id)a0;
- (id)scheduleURLRequest:(id)a0 destination:(long long)a1 priority:(long long)a2 loggingKey:(id)a3 completion:(id /* block */)a4;
- (void)_serviceRequests;
- (id)initWithURLSession:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)_isLowPriority:(long long)a0;
- (void)_applyPriority:(long long)a0 toRequest:(id)a1;
- (BOOL)_shouldRetryRequest:(id)a0 withError:(id)a1;

@end
