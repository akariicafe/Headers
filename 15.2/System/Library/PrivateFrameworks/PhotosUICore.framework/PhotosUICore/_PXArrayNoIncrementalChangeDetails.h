@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails

- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)a0;
- (BOOL)hasIncrementalChanges;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)a0;

@end
