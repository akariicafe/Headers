@class HKCodableQuantity, HKCodableDateComponents;

@interface HKCodableStatistics : PBCodable <NSCopying> {
    struct { unsigned char dataCount : 1; unsigned char dataType : 1; unsigned char endDate : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasAverageQuantity;
@property (retain, nonatomic) HKCodableQuantity *averageQuantity;
@property (readonly, nonatomic) BOOL hasMinQuantity;
@property (retain, nonatomic) HKCodableQuantity *minQuantity;
@property (readonly, nonatomic) BOOL hasMaxQuantity;
@property (retain, nonatomic) HKCodableQuantity *maxQuantity;
@property (readonly, nonatomic) BOOL hasMostRecentQuantity;
@property (retain, nonatomic) HKCodableQuantity *mostRecentQuantity;
@property (readonly, nonatomic) BOOL hasSumQuantity;
@property (retain, nonatomic) HKCodableQuantity *sumQuantity;
@property (readonly, nonatomic) BOOL hasDurationQuantity;
@property (retain, nonatomic) HKCodableQuantity *durationQuantity;
@property (nonatomic) BOOL hasDataCount;
@property (nonatomic) long long dataCount;
@property (readonly, nonatomic) BOOL hasStatisticsInterval;
@property (retain, nonatomic) HKCodableDateComponents *statisticsInterval;

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
