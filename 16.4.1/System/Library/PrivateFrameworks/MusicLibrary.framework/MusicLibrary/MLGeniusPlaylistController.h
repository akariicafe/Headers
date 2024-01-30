@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {
    void *_echo;
    void *_echo_library;
    void *_echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}

+ (id)geniusTracksForSeedTrack:(id)a0 error:(id *)a1;
+ (BOOL)hasGeniusDataAvailable;
+ (BOOL)hasGeniusFeatureEnabled;
+ (id)playlistControllerWithSeedTracks:(id)a0 error:(id *)a1;
+ (void)populateContainer:(id)a0 withSeedTrack:(id)a1 completionBlock:(id /* block */)a2;
+ (unsigned long long)defaultMinTrackCount;
+ (unsigned long long)defaultTrackCount;
+ (void)ignoreUnusedWarnings;
+ (BOOL)useFakeGeniusData;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)tracksFromClusterForCount:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_canIncludeTrackInGeniusContainer:(id)a0;
- (BOOL)_createClusterPlaylistWithSeedTracks:(id)a0 error:(id *)a1;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)a0 maxTracks:(unsigned long long)a1 stride:(int)a2;
- (BOOL)_onBackgroundQueue_fakePopulateContainer:(id)a0 withSeedTrack:(id)a1 error:(id *)a2;
- (BOOL)_onBackgroundQueue_populateContainer:(id)a0 seedTrack:(id)a1 error:(id *)a2;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)a0 error:(id *)a1;
- (id)_sharedBlobMutableData;

@end
