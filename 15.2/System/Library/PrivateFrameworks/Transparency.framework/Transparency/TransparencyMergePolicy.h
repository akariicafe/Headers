@interface TransparencyMergePolicy : NSMergePolicy

- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (id)init;
- (void)updateTreeHead:(id)a0 withConflictingHead:(id)a1;

@end
