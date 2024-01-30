@class _PASXPCClientHelper;

@interface ATXHomeScreenSuggestionSender : NSObject <ATXHomeScreenSuggestionServerXPCInterface> {
    _PASXPCClientHelper *_xpcClientHelper;
}

- (void)forceDebugRotationForStack:(id)a0 extensionBundleId:(id)a1 kind:(id)a2 completion:(id /* block */)a3;
- (void)getCurrentSuggestionsWidgetAndAppPredictionPanelLayoutsWithCompletionHandler:(id /* block */)a0;
- (void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(id /* block */)a0;
- (void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
