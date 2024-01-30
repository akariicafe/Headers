@class NSMutableArray;

@interface HMObjectMergeOperations : NSObject

@property (retain, nonatomic) NSMutableArray *operations;

- (id)init;
- (void).cxx_destruct;
- (void)_addOperation:(id)a0;
- (void)_executeOperationsOnQueue:(id)a0;

@end
