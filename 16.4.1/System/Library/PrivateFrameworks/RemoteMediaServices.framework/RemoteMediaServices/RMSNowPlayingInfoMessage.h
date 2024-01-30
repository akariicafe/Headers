@class NSString;

@interface RMSNowPlayingInfoMessage : PBCodable <NSCopying> {
    struct { unsigned char databaseID : 1; unsigned char itemID : 1; unsigned char timeRemaining : 1; unsigned char timestamp : 1; unsigned char totalDuration : 1; unsigned char likedState : 1; unsigned char mediaKind : 1; unsigned char playbackState : 1; unsigned char revisionNumber : 1; unsigned char scrubbableState : 1; unsigned char canSkipNext : 1; unsigned char canSkipPrevious : 1; unsigned char canWishlist : 1; unsigned char hasChapterData : 1; unsigned char likeable : 1; } _has;
}

@property (nonatomic) BOOL hasItemID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) BOOL hasDatabaseID;
@property (nonatomic) unsigned long long databaseID;
@property (readonly, nonatomic) BOOL hasTrackName;
@property (retain, nonatomic) NSString *trackName;
@property (readonly, nonatomic) BOOL hasArtistName;
@property (retain, nonatomic) NSString *artistName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (retain, nonatomic) NSString *albumName;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasTimeRemaining;
@property (nonatomic) double timeRemaining;
@property (nonatomic) BOOL hasTotalDuration;
@property (nonatomic) double totalDuration;
@property (nonatomic) BOOL hasRevisionNumber;
@property (nonatomic) unsigned int revisionNumber;
@property (nonatomic) BOOL hasMediaKind;
@property (nonatomic) int mediaKind;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic) BOOL hasLikedState;
@property (nonatomic) int likedState;
@property (nonatomic) BOOL hasScrubbableState;
@property (nonatomic) int scrubbableState;
@property (nonatomic) BOOL hasCanSkipNext;
@property (nonatomic) BOOL canSkipNext;
@property (nonatomic) BOOL hasCanSkipPrevious;
@property (nonatomic) BOOL canSkipPrevious;
@property (nonatomic) BOOL hasLikeable;
@property (nonatomic) BOOL likeable;
@property (nonatomic) BOOL hasCanWishlist;
@property (nonatomic) BOOL canWishlist;
@property (nonatomic) BOOL hasHasChapterData;
@property (nonatomic) BOOL hasChapterData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
