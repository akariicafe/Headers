@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
    void *_echo;
    void *_echo_library;
    void *_echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}

+ (BOOL)hasGeniusFeatureEnabled;
+ (BOOL)hasGeniusDataAvailable;
+ (id)geniusTracksForSeedTrack:(id)a0 error:(id *)a1;
+ (id)playlistControllerWithSeedTracks:(id)a0 error:(id *)a1;
+ (void)populateContainer:(id)a0 withSeedTrack:(id)a1 completionBlock:(id /* block */)a2;
+ (unsigned long long)defaultMinTrackCount;
+ (unsigned long long)defaultTrackCount;
+ (BOOL)useFakeGeniusData;
+ (void)ignoreUnusedWarnings;

- (id)tracksFromClusterForCount:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_sharedBlobMutableData;
- (BOOL)_canIncludeTrackInGeniusContainer:(id)a0;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)a0 maxTracks:(unsigned long long)a1 stride:(int)a2;
- (BOOL)_onBackgroundQueue_fakePopulateContainer:(id)a0 withSeedTrack:(id)a1 error:(id *)a2;
- (BOOL)_onBackgroundQueue_populateContainer:(id)a0 seedTrack:(id)a1 error:(id *)a2;
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)a0 error:(id *)a1;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)a0 error:(id *)a1;

@end
