@class NSMutableArray;

@interface NTKTransactionCommitCoordinator : NSObject {
    NSMutableArray *_commitHandlers;
}

+ (id)_sharedInstance;
+ (BOOL)addTransactionCommitHandler:(id /* block */)a0;
+ (void)flushCommitHandlers;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_addTransactionCommitHandler:(id /* block */)a0;
- (void)_registerCATransactionCommitHandler;

@end
