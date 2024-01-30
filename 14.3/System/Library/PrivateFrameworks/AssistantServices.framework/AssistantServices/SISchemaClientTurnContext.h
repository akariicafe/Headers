@class NSData;

@interface SISchemaClientTurnContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTurnID;
@property (retain, nonatomic) NSData *turnID;

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
