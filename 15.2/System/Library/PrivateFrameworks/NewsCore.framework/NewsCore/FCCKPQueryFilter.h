@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

@interface FCCKPQueryFilter : PBCodable <NSCopying> {
    FCCKPRecordFieldIdentifier *_fieldName;
    FCCKPRecordFieldValue *_fieldValue;
    int _type;
    struct { unsigned char type : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
