@class PVClusterer, NSURL, PHPhotoLibrary, VCPPhotosPersistenceDelegate, PVContext;

@interface VCPFaceProcessingServiceWorker : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PVContext *_context;
    PVClusterer *_clusterer;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
    NSURL *_suggestionLoggingDirectory;
    BOOL _suggestionLoggingSessionOpen;
    BOOL _suggestionsLoggingEnabled;
}

+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)a0;
+ (id)workerWithPhotoLibrary:(id)a0 andContext:(id)a1;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)a0;

- (void)_closeSuggestionsLoggingSession;
- (void).cxx_destruct;
- (void)_copyImageAtURLToSuggestionsLoggingSession:(id)a0;
- (void)_appendToSuggestionsLog:(id)a0;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)a0 reply:(id /* block */)a1;
- (void)personPromoterStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)_startAndSyncClusterCacheWithLibrary:(BOOL)a0 reply:(id /* block */)a1;
- (void)_finalizeSuggestionsLog;
- (id)_suggestionsForPersonLocalIdentifier:(id)a0 clusterSequenceNumbers:(id)a1 excludePersonLocalIdentifiers:(id)a2 cancel:(id /* block */)a3 context:(id)a4 error:(id *)a5;
- (id)_suggestionsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 cancel:(id /* block */)a3 error:(id *)a4;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 context:(id)a3 reply:(id /* block */)a4 cancel:(id /* block */)a5;
- (void)resetFaceClusteringStateWithContext:(id)a0 reply:(id /* block */)a1;
- (id)initWithPhotoLibrary:(id)a0 andContext:(id)a1;
- (void)resetPersonsModelWithContext:(id)a0 reply:(id /* block */)a1;
- (void)reclusterFacesWithContext:(id)a0 reply:(id /* block */)a1 extendTimeout:(id /* block */)a2 cancel:(id /* block */)a3;
- (void)rebuildPersonsWithContext:(id)a0 reply:(id /* block */)a1 extendTimeout:(id /* block */)a2 cancel:(id /* block */)a3;
- (void)validateClusterCacheWithContext:(id)a0 reply:(id /* block */)a1;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)_logFaceToSuggestionsLog:(id)a0;
- (void)_openSuggestionsLoggingSession;
- (BOOL)_deleteAllVerifiedPersonsWithError:(id *)a0;

@end
