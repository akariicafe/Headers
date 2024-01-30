@class _PASXPCClientHelper;

@interface ATXHomeScreenSuggestionSender : NSObject <ATXHomeScreenSuggestionServerXPCInterface> {
    _PASXPCClientHelper *_xpcClientHelper;
}

- (id)init;
- (void).cxx_destruct;
- (void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)forceDebugRotationForStack:(id)a0 extensionBundleId:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(id /* block */)a0;

@end
