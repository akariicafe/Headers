@interface ICNoteMergePolicy : NSMergePolicy

- (id)initWithMergeType:(unsigned long long)a0;
- (id)init;
- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (void)mergeEncryptedData:(id)a0 forNote:(id)a1 mergeConflict:(id)a2;
- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;

@end
