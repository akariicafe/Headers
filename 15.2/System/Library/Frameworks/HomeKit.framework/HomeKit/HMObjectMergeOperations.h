@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject

@property (retain, nonatomic) NSMutableArray *operations;

- (void)_addOperation:(id)a0;
- (void)_executeOperationsOnQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
