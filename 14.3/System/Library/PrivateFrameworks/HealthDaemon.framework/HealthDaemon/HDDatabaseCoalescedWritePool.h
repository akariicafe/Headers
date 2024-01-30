@class NSLock, NSString, HDProfile, NSMutableArray, NSObject, _HKDelayedOperation;
@protocol OS_os_log, OS_dispatch_queue;

@interface HDDatabaseCoalescedWritePool : NSObject {
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_writeQueue;
    _HKDelayedOperation *_pendingWriteOperation;
    NSLock *_pendingWriteLock;
    NSMutableArray *_pendingWriteQueue;
}

@property (readonly, weak, nonatomic) HDProfile *profile;

- (void)flushPendingWriteQueueWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_queue_performPendingWriteOperationsWithError:(id *)a0;
- (BOOL)_performPendingWriteRecords:(id)a0 transaction:(id)a1 accessibilityError:(id)a2 error:(id *)a3;
- (void)_queue_performDelayedOperation;
- (id)initWithProfile:(id)a0 name:(id)a1 loggingCategory:(id)a2;
- (void)performWriteWithMaximumLatency:(double)a0 block:(id /* block */)a1 completion:(id /* block */)a2;

@end
