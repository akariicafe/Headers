@class HKCodableQuantity, NSMutableArray;

@interface HKCodableQuantityDistributionData : PBCodable <NSCopying> {
    struct { double *list; unsigned long long count; unsigned long long size; } _histogramCounts;
    struct APPLE_168 { unsigned char endDate : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasMinimumBucketValue;
@property (retain, nonatomic) HKCodableQuantity *minimumBucketValue;
@property (readonly, nonatomic) BOOL hasMinimumValue;
@property (retain, nonatomic) HKCodableQuantity *minimumValue;
@property (readonly, nonatomic) BOOL hasMaximumValue;
@property (retain, nonatomic) HKCodableQuantity *maximumValue;
@property (readonly, nonatomic) BOOL hasAverageValue;
@property (retain, nonatomic) HKCodableQuantity *averageValue;
@property (readonly, nonatomic) BOOL hasDuration;
@property (retain, nonatomic) HKCodableQuantity *duration;
@property (readonly, nonatomic) unsigned long long histogramCountsCount;
@property (readonly, nonatomic) double *histogramCounts;
@property (retain, nonatomic) NSMutableArray *contextIdentifiers;

+ (Class)contextIdentifiersType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addContextIdentifiers:(id)a0;
- (void)addHistogramCounts:(double)a0;
- (void)clearContextIdentifiers;
- (void)clearHistogramCounts;
- (id)contextIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)contextIdentifiersCount;
- (double)histogramCountsAtIndex:(unsigned long long)a0;
- (void)setHistogramCounts:(double *)a0 count:(unsigned long long)a1;

@end
