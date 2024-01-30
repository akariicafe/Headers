@class CPLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    unsigned long long _backgroundCacheSize;
    unsigned long long _cacheSize;
    CPLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    long long _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;

- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void)dealloc;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_clearCache;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (void)_handleDidEnterBackgroundNotification:(id)a0;
- (void)_handleDidReceiveMemoryWarningNotification:(id)a0;
- (void)_handleWillEnterForegroundNotification:(id)a0;
- (void)_cacheArtworkRepresentation:(id)a0 forKey:(id)a1;
- (void)_setCacheSize:(unsigned long long)a0 preserveExisting:(BOOL)a1;

@end
