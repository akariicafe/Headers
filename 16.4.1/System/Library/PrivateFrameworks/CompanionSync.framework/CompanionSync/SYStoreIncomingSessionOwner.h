@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner

- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (BOOL)isResetSync;
- (id)initWithIncomingSession:(id)a0;

@end
