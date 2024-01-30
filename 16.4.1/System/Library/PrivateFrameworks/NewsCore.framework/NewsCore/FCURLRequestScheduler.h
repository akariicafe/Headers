@class NSURLSession, NSMapTable, NSMutableOrderedSet, NSDate, NFUnfairLock;

@interface FCURLRequestScheduler : NSObject {
    NSURLSession *_URLSession;
    NSMutableOrderedSet *_requests;
    NSMapTable *_inFlightURLTasks;
    unsigned long long _maxInFlightURLTasks;
    unsigned long long _maxInFlightLowPriorityURLTasks;
    NFUnfairLock *_lock;
    NSDate *_dateOfLastProgress;
}

- (id)scheduleURLRequest:(id)a0 destination:(long long)a1 priority:(long long)a2 loggingKey:(id)a3 completion:(id /* block */)a4;
- (id)initWithURLSession:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
