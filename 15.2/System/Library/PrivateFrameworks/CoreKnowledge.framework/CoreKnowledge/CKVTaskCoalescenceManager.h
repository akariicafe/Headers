@class NSString, NSMutableDictionary, NSObject, CKVConcurrentDictionary;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface CKVTaskCoalescenceManager : NSObject {
    NSString *_managerName;
    _Atomic unsigned int _eventIdCounter;
    NSMutableDictionary *_taskRegistry;
    CKVConcurrentDictionary *_eventRegistry;
    unsigned int _transactionCounter;
    double _coalescenceInterval;
    double _coalescenceDelay;
    NSObject<OS_dispatch_queue> *_taskRegistryQueue;
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
}

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)initWithManagerName:(id)a0 coalescenceInterval:(double)a1 coalescenceDelay:(double)a2 dispatchQoS:(unsigned int)a3;
- (void).cxx_destruct;
- (id)init;
- (void)_endTransaction;
- (void)submitTaskWithId:(unsigned short)a0 taskBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_beginTransaction;
- (BOOL)_isNowInCoalescingWindowWithLastTask:(id)a0;
- (BOOL)_shouldCoalesceWithLastTask:(id)a0;

@end
