@class NSMutableArray;

@interface FCCKPRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;
- (void)clearFields;
- (void)addFields:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
