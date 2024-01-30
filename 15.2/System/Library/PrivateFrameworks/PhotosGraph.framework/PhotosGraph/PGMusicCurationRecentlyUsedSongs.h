@class NSString;

@interface PGMusicCurationRecentlyUsedSongs : NSObject {
    void /* unknown type, empty encoding */ mostRecentlyUsedSongIDDateMap;
}

@property (nonatomic, readonly) NSString *description;

+ (id)recentlyUsedAppleMusicSongsFromPhotoLibrary:(id)a0;
+ (id)recentlyUsedFlexMusicSongsFromPhotoLibrary:(id)a0;

- (void)addMusicCuration:(id)a0 date:(id)a1;
- (void)addFlexMusicCuration:(id)a0 date:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addWithSongIDDateMap:(id)a0;
- (void)addSongIDs:(id)a0 date:(id)a1;

@end
