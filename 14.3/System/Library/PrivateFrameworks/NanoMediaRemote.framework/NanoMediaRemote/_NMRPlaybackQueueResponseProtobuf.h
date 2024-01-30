@class NSData;

@interface _NMRPlaybackQueueResponseProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPlaybackQueue;
@property (retain, nonatomic) NSData *playbackQueue;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) NSData *error;

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
