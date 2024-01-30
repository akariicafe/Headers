@class _PASXPCClientHelper;

@interface ATXHomeScreenSuggestionSender : NSObject <ATXHomeScreenSuggestionServerXPCInterface> {
    _PASXPCClientHelper *_xpcClientHelper;
}

- (void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forceDebugRotationForStack:(id)a0 extensionBundleId:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)getCurrentSuggestionsWidgetAndAppPredictionPanelLayoutsWithCompletionHandler:(id /* block */)a0;

@end
