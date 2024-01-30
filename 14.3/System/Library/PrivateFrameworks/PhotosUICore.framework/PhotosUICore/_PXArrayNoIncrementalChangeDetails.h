@interface _PXArrayNoIncrementalChangeDetails : PXArrayChangeDetails

- (BOOL)hasIncrementalChanges;
- (unsigned long long)indexAfterRevertingChangesFromIndex:(unsigned long long)a0;
- (unsigned long long)indexAfterApplyingChangesToIndex:(unsigned long long)a0;

@end
