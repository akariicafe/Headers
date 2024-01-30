@interface VCCompanionSyncIncomingSession : VCCompanionSyncSession

+ (long long)direction;

- (void)resetDataStoreForSyncSession:(id)a0 completion:(id /* block */)a1;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;

@end
