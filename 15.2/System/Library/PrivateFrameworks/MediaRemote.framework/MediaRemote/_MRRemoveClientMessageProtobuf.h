@class _MRNowPlayingClientProtobuf;

@interface _MRRemoveClientMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingClientProtobuf *_client;
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
