@class NSData;

@interface _NMRPlaybackQueueRequestProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) NSData *request;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) NSData *playerPath;

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
