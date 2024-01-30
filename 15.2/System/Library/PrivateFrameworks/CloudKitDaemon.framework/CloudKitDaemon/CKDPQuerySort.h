@class CKDPRecordFieldIdentifier, CKDPLocationCoordinate;

@interface CKDPQuerySort : PBCodable <NSCopying> {
    struct { unsigned char order : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFieldName;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldName;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) int order;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) CKDPLocationCoordinate *coordinate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsOrder:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)orderAsString:(int)a0;

@end
