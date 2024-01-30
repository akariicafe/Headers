@interface RequestDispatcherBridges.GenericContextTransformer : NSObject <AFContextSnapshotTransforming>

- (id)init;
- (void).cxx_destruct;
- (void)getRedactedContextForContextSnapshot:(id)a0 metadata:(id)a1 privacyPolicy:(long long)a2 completion:(id /* block */)a3;

@end
