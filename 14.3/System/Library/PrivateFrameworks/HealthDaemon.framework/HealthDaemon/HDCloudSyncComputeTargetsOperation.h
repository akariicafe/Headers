@interface HDCloudSyncComputeTargetsOperation : HDCloudSyncOperation

- (void)main;
- (id)_pushTargetsWithError:(id *)a0;
- (id)_pullTargetsWithError:(id *)a0;
- (BOOL)_isValidPushStoreRecord:(id)a0 zone:(id)a1 ownerIdentifier:(id)a2;
- (id)_storeForStoreRecord:(id)a0 zone:(id)a1 error:(id *)a2;
- (long long)_hasStateMismatchForStoreForStoreRecord:(id)a0 zone:(id)a1 error:(id *)a2;

@end
