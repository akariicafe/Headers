@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable <NSCopying>

@property (nonatomic) int status;
@property (retain, nonatomic) NSData *md5;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
