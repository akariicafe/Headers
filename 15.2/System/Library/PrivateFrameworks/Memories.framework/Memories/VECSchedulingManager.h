@class NSMutableArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface VECSchedulingManager : NSObject {
    unsigned long long _batchSize;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_suspendGroup;
    NSMapTable *_lookupTable;
    NSObject<OS_dispatch_queue> *_queue[3];
    NSMutableArray *_taskLIFO[3];
    long long _runingTaskCount[3];
    BOOL _isFIFO;
}

+ (id)concurrentScheduler;
+ (id)serialScheduler;
+ (id)concurrentSchedulerWithBatchSize:(unsigned long long)a0;
+ (id)sharedSerialScheduler;
+ (id)sharedConcurrentScheduler;

- (id)description;
- (void)_processNextBatch;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)registerRequest:(id)a0;
- (unsigned long long)_priorityIndexWithPriority:(unsigned long long)a0;
- (void)deregisterRequest:(int)a0;
- (int)postSchedulingRequest:(id)a0 withPriority:(unsigned long long)a1;
- (void)setIsFIFO:(BOOL)a0;
- (int)processTaskWithPriority:(unsigned long long)a0 taskHandler:(id /* block */)a1;
- (void)cancelSchedulingRequestWithID:(int)a0;
- (void)cancelAllSchedulingRequests;

@end
