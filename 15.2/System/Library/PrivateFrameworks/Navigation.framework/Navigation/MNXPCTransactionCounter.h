@class NSLock, NSObject;
@protocol OS_os_transaction;

@interface MNXPCTransactionCounter : NSObject {
    NSObject<OS_os_transaction> *_osTransaction;
    NSLock *_countLock;
    unsigned long long _count;
}

- (void)decrement;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (void)increment:(id)a0;

@end
