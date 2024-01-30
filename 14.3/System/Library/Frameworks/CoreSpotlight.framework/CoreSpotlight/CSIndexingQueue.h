@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSIndexingQueue : NSObject

@property double idleTime;
@property double idleTimeLeeway;
@property unsigned long long maximumBatchSize;
@property (retain) NSMutableDictionary *queuedItems;
@property (retain) NSObject<OS_dispatch_queue> *coalescingQueue;
@property (retain) NSObject<OS_dispatch_source> *coalescingTimer;
@property long long mode;
@property (copy) id /* block */ notifyBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMode:(long long)a0 notifyBlock:(id /* block */)a1;
- (void)flush;
- (void)_applicationWillResign:(id)a0;
- (id)initWithIdleTime:(double)a0 idleTimeLeeway:(double)a1 maximumBatchSize:(unsigned long long)a2 mode:(long long)a3 notifyBlock:(id /* block */)a4;
- (void)queueItem:(id)a0;
- (void)queueItems:(id)a0;
- (void)_flushWithAppResigned:(BOOL)a0 forced:(BOOL)a1;
- (void)_queueItems:(id)a0;

@end
