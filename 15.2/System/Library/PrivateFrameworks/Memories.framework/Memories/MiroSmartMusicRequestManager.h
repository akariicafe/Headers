@class FMSongLibrary, NSSet, NSArray, MiroAutoEditLogger;

@interface MiroSmartMusicRequestManager : VEiOSSharedObject {
    BOOL _moodIsDownloading[12];
}

@property (readonly, nonatomic) FMSongLibrary *library;
@property (retain, nonatomic) NSSet *moodIDSet;
@property (nonatomic) double initTime;
@property (nonatomic) BOOL didLogSongs;
@property (retain, nonatomic) MiroAutoEditLogger *logger;
@property (retain) NSArray *observers;
@property (nonatomic) BOOL allowsDownloads;

- (void)_setup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)fetchSongWithUID:(id)a0;
- (id)fetchAllSongs;
- (id)bestLocalSongUIDForKeywords:(id)a0 musicGenreDistribution:(id)a1 moodID:(id)a2 excludingSongs:(id)a3 forceLocal:(BOOL)a4;
- (void)markSongUIDAsRequested:(id)a0;
- (id)bestLocalSongUIDForKeywords:(id)a0 musicGenreDistribution:(id)a1 moodID:(id)a2 excludingSongs:(id)a3;
- (id)nextFeaturedSongToDownload;
- (id)bestSongToDownloadForMoodID:(id)a0;
- (id)songLibrary;
- (BOOL)hasEnoughLocalSongsForMoodID:(id)a0;
- (id)recommendSongUIDForKeywords:(id)a0 musicGenreDistribution:(id)a1 moodID:(id)a2 excludingSongs:(id)a3;
- (void)_removeObserversOnLibrary;
- (void)_downloadInProgressChanged:(id)a0;
- (unsigned long long)_indexForMoodID:(id)a0;
- (id)_moodIDforSongUID:(id)a0;
- (void)storeDatePlayedForSongID:(id)a0;
- (void)_requestDownloadForMoodID:(id)a0;
- (BOOL)_isDownloadingforMoodID:(id)a0;
- (void)_setDownloding:(BOOL)a0 forMoodID:(id)a1;
- (id)_addObserversOnSongLibrary:(id)a0 indicateNetworkActivity:(BOOL)a1;
- (id)_featuredSongPredicateForMoodTag:(id)a0;
- (id)_featuredSongSortDescriptor;
- (id)_featuredSongPredicate;
- (id)allSongsScoredForKeywords:(id)a0 musicGenreDistribution:(id)a1 moodID:(id)a2 excludingSongs:(id)a3 localOptions:(int)a4;
- (double)scoreSong:(id)a0 withKeywords:(id)a1;
- (double)scoreSong:(id)a0 forSpecialKeywords:(id)a1;
- (double)scoreSong:(id)a0 withRegionID:(id)a1;
- (double)scoreLocalityForSong:(id)a0;
- (double)scoreSong:(id)a0 withMusicGenreDistribution:(id)a1;
- (double)scoreSong:(id)a0 withDateLastSelected:(double)a1;
- (double)scoreSong:(id)a0 withMoodID:(id)a1;
- (BOOL)_isDownloadingAnything;
- (void)logSongLibraryInitTimeWithLogger:(id)a0;
- (void)tearDownSongLibrary;
- (id)fetchFeaturedSongsForMoodTag:(id)a0;
- (id)moodIDForSong:(id)a0;
- (id)genreIDsForSong:(id)a0;
- (BOOL)songHasSpecialKeyword:(id)a0;
- (void)purgeAllLocalCachedAssets;

@end
