@class NSHashTable, NSObject;
@protocol OS_os_transaction;

@interface MNXPCTransactionManager : NSObject {
    NSObject<OS_os_transaction> *_xpcTransaction;
    NSHashTable *_requesters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addHighMemoryThresholdRequest:(id)a0;
- (void)removeHighMemoryThresholdRequest:(id)a0 afterDelay:(double)a1;

@end
