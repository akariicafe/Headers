@class NSString;

@interface _MRPlaybackQueueContextProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRevision;
@property (retain, nonatomic) NSString *revision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
