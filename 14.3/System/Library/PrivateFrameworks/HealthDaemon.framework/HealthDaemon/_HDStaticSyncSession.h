@interface _HDStaticSyncSession : HDSyncSession

- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)a0;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)a0;
- (id)newChangeWithSyncEntityClass:(Class)a0;

@end
