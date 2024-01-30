@interface HDCodableQuantitySeriesDatum : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) double value;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
