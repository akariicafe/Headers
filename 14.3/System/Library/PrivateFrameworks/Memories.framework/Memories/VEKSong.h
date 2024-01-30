@class FMSong, NSString, MPMediaItem, NSSet;

@interface VEKSong : NSObject <NSCopying>

@property (nonatomic) unsigned long long iTunesID;
@property (retain, nonatomic) MPMediaItem *iTunesMediaItem;
@property (retain, nonatomic) FMSong *fmSong;
@property (readonly, nonatomic) id songID;
@property (readonly, nonatomic) BOOL isSmartMusic;
@property (readonly, nonatomic) BOOL isiTunesMusic;
@property (readonly, nonatomic) NSString *songName;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSString *artworkPath;
@property (readonly, nonatomic) NSSet *genres;
@property (readonly, nonatomic) long long mood;
@property (readonly, nonatomic) BOOL isLocal;

+ (void)initialize;
+ (id)availableSmartSongs;
+ (id)featuredSmartSongsForMood:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)previewPlayerItemForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 normalizedVolume:(double *)a1;
- (id)initWithiTunesMusicID:(unsigned long long)a0;
- (id)initWithSmartMusicID:(id)a0;
- (id)_fetchMediaItemForMediaID:(unsigned long long)a0;
- (id)fetchSmartSongArtwork;
- (long long)moodForMoodString:(id)a0;

@end
