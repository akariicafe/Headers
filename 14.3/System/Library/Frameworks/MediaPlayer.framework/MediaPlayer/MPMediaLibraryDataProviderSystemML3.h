@class NSObject;
@protocol OS_dispatch_queue, MPArtworkDataSource;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
    id<MPArtworkDataSource> _completeMyCollectionArtworkDataSource;
    long long _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_localizedGeniusErrorForError:(id)a0 geniusEnabled:(BOOL)a1;
+ (id)_localizedCloudGeniusErrorForError:(id)a0;

- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)a0 count:(unsigned long long *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isGeniusEnabled;
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)a0 collectionGroupingType:(long long)a1 dataProviderClass:(out Class *)a2;
- (id)errorResolverForItem:(id)a0;
- (void)seedPlaylistWithIdentifier:(long long)a0 withItemWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (id)initWithLibrary:(id)a0;
- (void)_seedCloudPlaylistWithTrack:(id)a0 container:(id)a1 completionBlock:(id /* block */)a2;
- (void)geniusItemsForSeedItem:(id)a0 completion:(id /* block */)a1;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)a0 count:(unsigned long long)a1 error:(id *)a2;
- (long long)_currentRevision;
- (void)updateEntitesToCurrentRevision;
- (id)completeMyCollectionArtworkDataSource;
- (void)_initInstanceVariableOnce;
- (void)releaseGeniusClusterPlaylist:(void *)a0;

@end
