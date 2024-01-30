@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRPlaybackQueueContextProtobuf;

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    double _artworkHeight;
    double _artworkWidth;
    int _cachingPolicy;
    NSMutableArray *_contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf *_context;
    NSString *_label;
    int _length;
    int _location;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _includeInfo;
    BOOL _includeLanguageOptions;
    BOOL _includeLyrics;
    BOOL _includeMetadata;
    BOOL _includeSections;
    BOOL _isLegacyNowPlayingInfoRequest;
    BOOL _returnContentItemAssetsInUserCompletion;
    struct { unsigned char artworkHeight : 1; unsigned char artworkWidth : 1; unsigned char cachingPolicy : 1; unsigned char length : 1; unsigned char location : 1; unsigned char includeInfo : 1; unsigned char includeLanguageOptions : 1; unsigned char includeLyrics : 1; unsigned char includeMetadata : 1; unsigned char includeSections : 1; unsigned char isLegacyNowPlayingInfoRequest : 1; unsigned char returnContentItemAssetsInUserCompletion : 1; } _has;
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
