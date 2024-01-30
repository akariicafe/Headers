@class FCCKPRecordFieldIdentifier;

@interface FCCKPQuerySort : PBCodable <NSCopying> {
    struct { unsigned char order : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) FCCKPRecordFieldIdentifier *fieldName;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) int order;

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
