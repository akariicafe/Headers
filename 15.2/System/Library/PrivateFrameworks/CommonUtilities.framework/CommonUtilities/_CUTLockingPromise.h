@class CUTResult, NSMutableArray, NSRecursiveLock;

@interface _CUTLockingPromise : CUTPromise

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) BOOL done;
@property (retain, nonatomic) CUTResult *result;
@property (retain, nonatomic) NSMutableArray *resultBlocks;

- (void)registerResultBlock:(id /* block */)a0;
- (void)_fulfillWithResult:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
