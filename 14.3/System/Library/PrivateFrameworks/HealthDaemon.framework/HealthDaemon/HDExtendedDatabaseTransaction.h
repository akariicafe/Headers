@class NSUUID, HDDatabase, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface HDExtendedDatabaseTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *automaticRollbackTimer;
@property (copy, nonatomic) id /* block */ pendingWork;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSError *lastError;
@property (nonatomic) BOOL pendingWorkDidSucceed;
@property (readonly, nonatomic) double transactionTimeout;
@property (readonly, nonatomic) double continuationTimeout;
@property (readonly, copy, nonatomic) NSUUID *transactionIdentifier;
@property (readonly, weak, nonatomic) HDDatabase *database;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDatabase:(id)a0 context:(id)a1 transactionTimeout:(double)a2 continuationTimeout:(double)a3 error:(id *)a4;
- (BOOL)rollbackDueToError:(id)a0 errorOut:(id *)a1;
- (void)_enableAutomaticRollbackTimer;
- (void)_transaction_runTransactionWithContext:(id)a0;
- (BOOL)performInTransactionWithErrorOut:(id *)a0 block:(id /* block */)a1;
- (BOOL)commitWithErrorOut:(id *)a0;

@end
