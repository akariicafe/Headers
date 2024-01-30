@class _MRNowPlayingPlayerPathProtobuf, _MRContentItemProtobuf, _MRPlaybackSessionRequestProtobuf, NSString, NSMutableArray;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {
    double _playbackPosition;
    double _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    int _endpointOptions;
    NSMutableArray *_events;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _allowFadeTransition;
    struct { unsigned char playbackPosition : 1; unsigned char playbackRate : 1; unsigned char endpointOptions : 1; unsigned char playbackState : 1; unsigned char playerOptions : 1; unsigned char allowFadeTransition : 1; } _has;
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
