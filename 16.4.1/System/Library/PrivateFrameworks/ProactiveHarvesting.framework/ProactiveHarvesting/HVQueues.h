@class _PASLock, NSObject;
@protocol OS_dispatch_queue;

@interface HVQueues : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
}

+ (id)defaultQueues;

- (BOOL)cleanupWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (BOOL)registerQueueObserver:(id)a0 dispatchQueue:(id)a1;
- (BOOL)dequeuedContentConsumedWithError:(id *)a0;
- (BOOL)dequeueContent:(id *)a0 contentProtection:(id *)a1 dataSource:(unsigned int)a2 dataSourceContentState:(id)a3 minimumLevelOfService:(unsigned char)a4 inMemoryItemsOnly:(BOOL)a5 error:(id *)a6;
- (id)init;
- (id)statsWithError:(id *)a0;
- (void)setQueue:(id)a0 forDataSource:(unsigned int)a1;
- (void).cxx_destruct;
- (BOOL)dequeuedContentNotConsumed:(id)a0 dataSource:(unsigned int)a1 error:(id *)a2;
- (BOOL)enqueueContent:(id)a0 contentProtection:(id)a1 error:(id *)a2;

@end
