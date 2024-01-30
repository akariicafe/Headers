@class _MRNowPlayingPlayerPathProtobuf, _MRContentItemProtobuf, _MRPlaybackSessionRequestProtobuf, NSString, NSMutableArray;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying> {
    double _playbackPosition;
    double _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    unsigned int _destinationTypes;
    int _endpointOptions;
    NSMutableArray *_events;
    unsigned int _originatorType;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _allowFadeTransition;
    struct { unsigned char playbackPosition : 1; unsigned char playbackRate : 1; unsigned char destinationTypes : 1; unsigned char endpointOptions : 1; unsigned char originatorType : 1; unsigned char playbackState : 1; unsigned char playerOptions : 1; unsigned char allowFadeTransition : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
