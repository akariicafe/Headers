@class NSData;

@interface WFPBRunRequest : PBRequest <NSCopying>

@property (nonatomic) int payloadType;
@property (retain, nonatomic) NSData *payload;

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
- (id)payloadTypeAsString:(int)a0;
- (int)StringAsPayloadType:(id)a0;

@end
