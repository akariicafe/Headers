@class NSObject;
@protocol OS_os_transaction, OS_dispatch_source;

@interface SGXpcTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    struct atomic_flag { _Atomic BOOL _Value; } _done;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

+ (id)transactionWithName:(const void *)a0;

- (void)setTimeout:(double)a0;
- (id)init;
- (BOOL)doneReturningWasDone;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(const void *)a0;
- (void)done;

@end
