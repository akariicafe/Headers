@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRSetNowPlayingPlayerMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
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
