@class _MROriginProtobuf, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) _MROriginProtobuf *origin;
@property (readonly, nonatomic) BOOL hasClient;
@property (retain, nonatomic) _MRNowPlayingClientProtobuf *client;
@property (readonly, nonatomic) BOOL hasPlayer;
@property (retain, nonatomic) _MRNowPlayingPlayerProtobuf *player;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
