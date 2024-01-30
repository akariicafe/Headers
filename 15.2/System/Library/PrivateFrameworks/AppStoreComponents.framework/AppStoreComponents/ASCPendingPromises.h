@class NSMutableArray, NSRecursiveLock;

@interface ASCPendingPromises : NSObject

@property (readonly, nonatomic) NSRecursiveLock *stateLock;
@property (retain, nonatomic) NSMutableArray *binaryPromisesIfLoaded;
@property (readonly, nonatomic) NSMutableArray *binaryPromises;
@property (retain, nonatomic) NSMutableArray *promisesIfLoaded;
@property (readonly, nonatomic) NSMutableArray *promises;
@property (readonly, nonatomic) BOOL hasPromises;

- (void)cancelAll;
- (void).cxx_destruct;
- (id)init;
- (void)finishAllWithError:(id)a0;
- (void)addPromise:(id)a0;
- (void)addBinaryPromise:(id)a0;
- (void)enumerateBinaryPromises:(id /* block */)a0 andPromises:(id /* block */)a1;
- (BOOL)containsBinaryPromise:(id)a0;
- (BOOL)containsPromise:(id)a0;

@end
