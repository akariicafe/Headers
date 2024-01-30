@class NSUUID, HDDatabase, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface HDExtendedDatabaseTransaction : NSObject {
    BOOL _pendingWorkDidSucceed;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    id /* block */ _pendingWork;
    unsigned long long _status;
    NSError *_lastError;
}

@property (readonly, nonatomic) double transactionTimeout;
@property (readonly, nonatomic) double continuationTimeout;
@property (readonly, copy, nonatomic) NSUUID *transactionIdentifier;
@property (readonly, weak, nonatomic) HDDatabase *database;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)commitWithErrorOut:(id *)a0;
- (id)initWithDatabase:(id)a0 context:(id)a1 transactionTimeout:(double)a2 continuationTimeout:(double)a3 error:(id *)a4;
- (BOOL)performInTransactionWithErrorOut:(id *)a0 block:(id /* block */)a1;
- (BOOL)rollbackDueToError:(id)a0 errorOut:(id *)a1;

@end
