@class NSString, PFDispatchQueue, PGManager, PHAServiceClientHandler;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling> {
    PHAServiceClientHandler *_serviceClientHandler;
    PGManager *_pgGraphManager;
    PFDispatchQueue *_requestQueue;
    unsigned long long _requestCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_endGraphOperation;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 withOptions:(id)a3 context:(id)a4 reply:(id /* block */)a5;
- (void).cxx_destruct;
- (void)_beginGraphOperation:(id)a0;
- (void)requestSignalModelInfosWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 withOptions:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)runCurationWithItems:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)graphUpdateDidStop;
- (id)phaGraphManager;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 withOptions:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)graphUpdateIsConsistent;
- (id)initWithServiceClientHandler:(id)a0;
- (void)handleOperation:(id)a0;
- (void)operationWillStart:(id)a0;
- (BOOL)wantsGraphUpdateNotifications;
- (void)requestGraphSearchMetadataWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (BOOL)wantsLiveGraphUpdates;
- (void)requestZeroKeywordsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (unsigned char)suggestionProfileFromSuggestionType:(unsigned short)a0 subtype:(unsigned short)a1;
- (void)generateSuggestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (id)currentlyUnavailableError;
- (void)graphUpdateMadeProgress:(double)a0;
- (void)requestSynonymsDictionariesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)operationDidFinish:(id)a0;

@end
