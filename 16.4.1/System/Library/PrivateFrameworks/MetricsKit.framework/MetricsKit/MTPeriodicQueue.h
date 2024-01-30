@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTPeriodicQueue : NSObject

@property (retain, nonatomic) NSMutableArray *mutableObjects;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double flushTimeInterval;
@property (nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled;
@property (nonatomic) long long maximumBatchSize;
@property (copy, nonatomic) id /* block */ flushHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue;

- (void)insertObject:(id)a0;
- (void)appendObject:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)__endFlushTimer;
- (void)__flushObjects:(id)a0;
- (void)__beginFlushTimer;
- (id)__clearObjects;
- (void)__flushObjects;
- (void)__flushObjects:(id)a0 maximumBatchSize:(long long)a1 flushHandler:(id /* block */)a2;
- (void)_beginFlushTimer;
- (void)_endFlushTimer;
- (void)flushObjects;
- (void)insertObjects:(id)a0;

@end
