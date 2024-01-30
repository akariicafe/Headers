@class _MRPlaybackSessionMigrateRequestProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionProtobuf;

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying> {
    _MRPlaybackSessionProtobuf *_playbackSession;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackSessionMigrateRequestProtobuf *_request;
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
