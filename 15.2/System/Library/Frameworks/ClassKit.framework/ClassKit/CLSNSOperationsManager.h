@class NSMutableArray;

@interface CLSNSOperationsManager : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableArray *_operations;
}

- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (void)performOperation:(id)a0 onOperationQueue:(id)a1 withTimeOut:(double)a2;

@end
