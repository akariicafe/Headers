@class _MROriginProtobuf, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) _MROriginProtobuf *origin;
@property (readonly, nonatomic) BOOL hasClient;
@property (retain, nonatomic) _MRNowPlayingClientProtobuf *client;
@property (readonly, nonatomic) BOOL hasPlayer;
@property (retain, nonatomic) _MRNowPlayingPlayerProtobuf *player;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
