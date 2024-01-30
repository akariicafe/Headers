@class _MRNowPlayingPlayerPathProtobuf;

@interface _MRPlayerClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    double _lastPlayingTimestamp;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct { unsigned char lastPlayingTimestamp : 1; } _has;
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
