@interface PLMergePolicy : NSMergePolicy

@property (readonly, nonatomic) BOOL isResolvingConflicts;

- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;

@end
