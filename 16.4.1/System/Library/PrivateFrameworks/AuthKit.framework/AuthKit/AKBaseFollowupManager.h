@protocol AKFollowUpProvider, AKFollowUpItemFactory;

@interface AKBaseFollowupManager : NSObject {
    id<AKFollowUpItemFactory> _factory;
    id<AKFollowUpProvider> _provider;
}

- (void).cxx_destruct;
- (id)_alignedInsertionCandidates:(id)a0 withExistingItems:(id)a1;
- (id)initWithFollowUpFactory:(id)a0 provider:(id)a1;
- (BOOL)synchronizeFollowUpsWithServerPayload:(id)a0 altDSID:(id)a1 error:(id *)a2;
- (void)teardownFollowUpWithContext:(id)a0 completion:(id /* block */)a1;

@end
