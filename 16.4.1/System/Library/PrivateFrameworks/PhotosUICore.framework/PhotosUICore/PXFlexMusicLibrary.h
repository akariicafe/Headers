@class FMSongLibrary, NSCountedSet, NSObject;
@protocol OS_dispatch_queue;

@interface PXFlexMusicLibrary : PXObservable {
    NSObject<OS_dispatch_queue> *_queue;
    FMSongLibrary *_queue_library;
    NSCountedSet *_queue_downloadingAssetsRequestCount;
}

@property (class, readonly, nonatomic) PXFlexMusicLibrary *sharedLibrary;

+ (id)_audioMixInputParametersForMixParameters:(id)a0 audioTrack:(id)a1 sampleRate:(int)a2;
+ (id)_mixParametersForAudioMixInputParameters:(id)a0 sampleRate:(int)a1;
+ (id)coalesceAudioMixInputParametersA:(id)a0 withAudioMixInputParametersB:(id)a1 audioTrack:(id)a2;
+ (void)purgeLocalFlexDataWithCompletion:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_fetchAssetsWithOptions:(id)a0;
- (void)_handleDownloadProgressChangedNotification:(id)a0;
- (void)_handleSongAssetsChangedNotification:(id)a0;
- (id)_queue_cueSourceFromRendition:(id)a0;
- (id)_queue_downloadableAssetForAsset:(id)a0 resourceType:(long long)a1;
- (id)_queue_fetchAssetsWithOptions:(id)a0;
- (id)_queue_flexMusicAssetWithSong:(id)a0 targetDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_queue_renditionForSongID:(id)a0 preferredDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)cancelDownloadForAsset:(id)a0 resourceType:(long long)a1;
- (id)cuesForAsset:(id)a0;
- (double)downloadProgressForAsset:(id)a0 resourceType:(long long)a1;
- (id)fetchAllAssets;
- (id)fetchAssetsWithIdentifiers:(id)a0;
- (id)fetchLocalAssetForMood:(unsigned long long)a0;
- (id)fetchSortedAssetsGroupedByMood;
- (BOOL)hasLocalResourceForAsset:(id)a0 resourceType:(long long)a1;
- (id)localURLForAsset:(id)a0 resourceType:(long long)a1;
- (id)playableAssetForAsset:(id)a0 preferredDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 audioMix:(id *)a2 peakValue:(double *)a3 loudness:(double *)a4;
- (id)requestAssetWithIdentifier:(id)a0 preferredDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 resultHandler:(id /* block */)a2;
- (id)requestAssetsWithIdentifiers:(id)a0 resultHandler:(id /* block */)a1;
- (void)requestDownloadForAsset:(id)a0 resourceType:(long long)a1;

@end
