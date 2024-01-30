@class MIPGenre, NSString, MIPPlaybackInfo, MIPArtist, MIPAlbum;

@interface MIPSong : PBCodable <NSCopying> {
    struct { unsigned char geniusId : 1; unsigned char audioFormat : 1; unsigned char discNumber : 1; unsigned char lyricsChecksum : 1; unsigned char trackNumber : 1; unsigned char userRating : 1; unsigned char excludeFromShuffle : 1; unsigned char hasVideo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAlbum;
@property (retain, nonatomic) MIPAlbum *album;
@property (readonly, nonatomic) BOOL hasArtist;
@property (retain, nonatomic) MIPArtist *artist;
@property (readonly, nonatomic) BOOL hasComposer;
@property (retain, nonatomic) MIPArtist *composer;
@property (readonly, nonatomic) BOOL hasGenre;
@property (retain, nonatomic) MIPGenre *genre;
@property (nonatomic) BOOL hasDiscNumber;
@property (nonatomic) int discNumber;
@property (nonatomic) BOOL hasTrackNumber;
@property (nonatomic) int trackNumber;
@property (nonatomic) BOOL hasUserRating;
@property (nonatomic) int userRating;
@property (nonatomic) BOOL hasExcludeFromShuffle;
@property (nonatomic) BOOL excludeFromShuffle;
@property (nonatomic) BOOL hasGeniusId;
@property (nonatomic) long long geniusId;
@property (nonatomic) BOOL hasAudioFormat;
@property (nonatomic) int audioFormat;
@property (nonatomic) BOOL hasHasVideo;
@property (nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) BOOL hasLyrics;
@property (retain, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) BOOL hasPlaybackInfo;
@property (retain, nonatomic) MIPPlaybackInfo *playbackInfo;
@property (nonatomic) BOOL hasLyricsChecksum;
@property (nonatomic) int lyricsChecksum;
@property (readonly, nonatomic) BOOL hasHlsPlaylistURL;
@property (retain, nonatomic) NSString *hlsPlaylistURL;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
