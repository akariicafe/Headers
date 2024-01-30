@class CKDPRecordFieldIdentifier, CKDPRecordFieldValue, CKDPLocationBound;

@interface CKDPQueryFilter : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (readonly, nonatomic) BOOL hasFieldValue;
@property (retain, nonatomic) CKDPRecordFieldValue *fieldValue;
@property (readonly, nonatomic) BOOL hasBounds;
@property (retain, nonatomic) CKDPLocationBound *bounds;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
