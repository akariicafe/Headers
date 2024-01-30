@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPQueryFilter : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) FCCKPRecordFieldIdentifier *fieldName;
@property (readonly, nonatomic) BOOL hasFieldValue;
@property (retain, nonatomic) FCCKPRecordFieldValue *fieldValue;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

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
