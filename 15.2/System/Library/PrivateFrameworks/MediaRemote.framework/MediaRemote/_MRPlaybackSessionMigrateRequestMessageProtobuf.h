@class _MRPlaybackSessionMigrateRequestProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionProtobuf;

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying> {
    _MRPlaybackSessionProtobuf *_playbackSession;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackSessionMigrateRequestProtobuf *_request;
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
