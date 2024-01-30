@class _MRPlaybackQueueCapabilitiesProtobuf, NSString, _MRNowPlayingInfoProtobuf, _MRPlaybackQueueProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf, _MRSupportedCommandsProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying> {
    double _playbackStateTimestamp;
    NSString *_displayID;
    NSString *_displayName;
    _MRNowPlayingInfoProtobuf *_nowPlayingInfo;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    _MRPlaybackQueueCapabilitiesProtobuf *_playbackQueueCapabilities;
    int _playbackState;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackQueueRequestProtobuf *_request;
    _MRSupportedCommandsProtobuf *_supportedCommands;
    struct { unsigned char playbackStateTimestamp : 1; unsigned char playbackState : 1; } _has;
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
