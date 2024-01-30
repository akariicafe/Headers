@class NSArray, NSProgress, NSMapTable;

@interface PXImportManager : NSObject {
    NSMapTable *_progressToProvidersMapping;
    NSMapTable *_progressToCompletionHandlerMapping;
    NSMapTable *_progressToSharedSourcesCompletionHandlerMapping;
    NSMapTable *_progressToErrorsMapping;
    NSMapTable *_providersToImportedResultObjectMapping;
}

@property (class, readonly) NSArray *supportedTypeIdentifiers;
@property (class, readonly) PXImportManager *defaultManager;

@property (readonly, nonatomic) NSProgress *progress;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)_addProgress:(id)a0 forItemProviders:(id)a1;
- (void)_addProgress:(id)a0 forItemProviders:(id)a1 assetCreationCompletionHandler:(id /* block */)a2;
- (void)_addProgress:(id)a0 forItemProviders:(id)a1 sharedSourceCompletionHandler:(id /* block */)a2;
- (id)_assetsForImportedItemProviders:(id)a0;
- (void)_handleCompletionOfImportForItemProvider:(id)a0 resultObject:(id)a1 progress:(id)a2 error:(id)a3;
- (void)_removeObserverFromProgress:(id)a0;
- (id)_sourcesForItemProviders:(id)a0;
- (void)fetchAssetsFromDrop:(id)a0 importIfNeeded:(BOOL)a1 completion:(id /* block */)a2;
- (id)importDragItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)importSharedSourcesForDragItems:(id)a0 completionHandler:(id /* block */)a1;

@end
