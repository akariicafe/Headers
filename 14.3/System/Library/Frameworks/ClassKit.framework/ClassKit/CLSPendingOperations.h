@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CLSPendingOperations : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableArray *_operations;
    NSObject<OS_os_log> *_logType;
}

- (void)addOperation:(id)a0;
- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeOperation:(id)a0;
- (void)performOperation:(id)a0 onOperationQueue:(id)a1 withTimeOut:(double)a2;
- (id)initWithLogType:(id)a0;

@end
