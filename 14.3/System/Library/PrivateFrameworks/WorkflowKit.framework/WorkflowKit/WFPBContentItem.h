@class NSData;

@interface WFPBContentItem : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *item;
@property (nonatomic) int encodingType;

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
- (id)encodingTypeAsString:(int)a0;
- (int)StringAsEncodingType:(id)a0;

@end
