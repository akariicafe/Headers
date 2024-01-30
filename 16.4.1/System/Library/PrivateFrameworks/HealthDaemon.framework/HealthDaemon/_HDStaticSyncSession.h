@interface _HDStaticSyncSession : HDSyncSession

- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (id)newChangeWithSyncEntityClass:(Class)a0 version:(struct { int x0; int x1; })a1;

@end
