@interface HDCodableWorkoutStatistics : PBCodable <NSCopying> {
    struct { unsigned char avgQuantity : 1; unsigned char maxQuantity : 1; unsigned char minQuantity : 1; unsigned char quantityType : 1; unsigned char sumQuantity : 1; } _has;
}

@property (nonatomic) BOOL hasQuantityType;
@property (nonatomic) long long quantityType;
@property (nonatomic) BOOL hasSumQuantity;
@property (nonatomic) double sumQuantity;
@property (nonatomic) BOOL hasMinQuantity;
@property (nonatomic) double minQuantity;
@property (nonatomic) BOOL hasMaxQuantity;
@property (nonatomic) double maxQuantity;
@property (nonatomic) BOOL hasAvgQuantity;
@property (nonatomic) double avgQuantity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
