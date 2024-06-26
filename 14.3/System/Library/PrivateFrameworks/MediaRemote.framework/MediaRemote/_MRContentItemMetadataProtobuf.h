@class NSString, NSData;

@interface _MRContentItemMetadataProtobuf : PBCodable <NSCopying> {
    double _duration;
    double _elapsedTime;
    double _elapsedTimeTimestamp;
    long long _iTunesStoreAlbumIdentifier;
    long long _iTunesStoreArtistIdentifier;
    long long _iTunesStoreIdentifier;
    long long _iTunesStoreSubscriptionIdentifier;
    double _inferredTimestamp;
    long long _legacyUniqueIdentifier;
    long long _radioStationIdentifier;
    double _releaseDate;
    double _startTime;
    NSString *_albumArtistName;
    NSString *_albumName;
    NSString *_albumYear;
    NSData *_appMetricsData;
    int _artworkDataHeightDeprecated;
    int _artworkDataWidthDeprecated;
    NSString *_artworkFileURL;
    NSString *_artworkIdentifier;
    NSString *_artworkMIMEType;
    NSString *_artworkURL;
    NSData *_artworkURLTemplatesData;
    NSString *_assetURLString;
    NSString *_brandIdentifier;
    int _chapterCount;
    NSString *_collectionIdentifier;
    NSData *_collectionInfoData;
    NSString *_composer;
    NSString *_contentIdentifier;
    NSData *_currentPlaybackDateData;
    float _defaultPlaybackRate;
    NSData *_deviceSpecificUserInfoData;
    NSString *_directorName;
    int _discNumber;
    float _downloadProgress;
    int _downloadState;
    int _editingStyleFlags;
    int _episodeNumber;
    int _episodeType;
    NSString *_genre;
    NSString *_localizedContentRating;
    NSString *_localizedDurationString;
    NSString *_lyricsURL;
    int _mediaSubType;
    int _mediaType;
    NSData *_nowPlayingInfoData;
    int _numberOfSections;
    int _playCount;
    float _playbackProgress;
    float _playbackRate;
    int _playlistType;
    NSString *_profileIdentifier;
    NSData *_purchaseInfoData;
    NSString *_radioStationName;
    NSString *_radioStationString;
    int _radioStationType;
    int _seasonNumber;
    NSString *_seriesName;
    NSString *_serviceIdentifier;
    NSString *_subtitle;
    NSString *_title;
    int _totalDiscCount;
    int _totalTrackCount;
    NSString *_trackArtistName;
    int _trackNumber;
    NSData *_userInfoData;
    BOOL _artworkAvailable;
    BOOL _infoAvailable;
    BOOL _isAlwaysLive;
    BOOL _isContainer;
    BOOL _isCurrentlyPlaying;
    BOOL _isExplicitItem;
    BOOL _isInWishList;
    BOOL _isLiked;
    BOOL _isLoading;
    BOOL _isPlayable;
    BOOL _isSharable;
    BOOL _isSteerable;
    BOOL _isStreamingContent;
    BOOL _languageOptionsAvailable;
    BOOL _lyricsAvailable;
    struct { unsigned char duration : 1; unsigned char elapsedTime : 1; unsigned char elapsedTimeTimestamp : 1; unsigned char iTunesStoreAlbumIdentifier : 1; unsigned char iTunesStoreArtistIdentifier : 1; unsigned char iTunesStoreIdentifier : 1; unsigned char iTunesStoreSubscriptionIdentifier : 1; unsigned char inferredTimestamp : 1; unsigned char legacyUniqueIdentifier : 1; unsigned char radioStationIdentifier : 1; unsigned char releaseDate : 1; unsigned char startTime : 1; unsigned char artworkDataHeightDeprecated : 1; unsigned char artworkDataWidthDeprecated : 1; unsigned char chapterCount : 1; unsigned char defaultPlaybackRate : 1; unsigned char discNumber : 1; unsigned char downloadProgress : 1; unsigned char downloadState : 1; unsigned char editingStyleFlags : 1; unsigned char episodeNumber : 1; unsigned char episodeType : 1; unsigned char mediaSubType : 1; unsigned char mediaType : 1; unsigned char numberOfSections : 1; unsigned char playCount : 1; unsigned char playbackProgress : 1; unsigned char playbackRate : 1; unsigned char playlistType : 1; unsigned char radioStationType : 1; unsigned char seasonNumber : 1; unsigned char totalDiscCount : 1; unsigned char totalTrackCount : 1; unsigned char trackNumber : 1; unsigned char artworkAvailable : 1; unsigned char infoAvailable : 1; unsigned char isAlwaysLive : 1; unsigned char isContainer : 1; unsigned char isCurrentlyPlaying : 1; unsigned char isExplicitItem : 1; unsigned char isInWishList : 1; unsigned char isLiked : 1; unsigned char isLoading : 1; unsigned char isPlayable : 1; unsigned char isSharable : 1; unsigned char isSteerable : 1; unsigned char isStreamingContent : 1; unsigned char languageOptionsAvailable : 1; unsigned char lyricsAvailable : 1; } _has;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
