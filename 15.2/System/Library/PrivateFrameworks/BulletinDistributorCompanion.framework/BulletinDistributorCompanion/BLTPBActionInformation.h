@class NSData;

@interface BLTPBActionInformation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSData *context;
@property (readonly, nonatomic) BOOL hasContextNulls;
@property (retain, nonatomic) NSData *contextNulls;

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
