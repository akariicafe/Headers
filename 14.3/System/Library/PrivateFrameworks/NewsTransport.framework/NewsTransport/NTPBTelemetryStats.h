@interface NTPBTelemetryStats : PBCodable <NSCopying> {
    struct { unsigned char count : 1; unsigned char max : 1; unsigned char mean : 1; unsigned char median : 1; unsigned char min : 1; unsigned char percentile95 : 1; } _has;
}

@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasMin;
@property (nonatomic) long long min;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) long long max;
@property (nonatomic) BOOL hasMean;
@property (nonatomic) long long mean;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) long long median;
@property (nonatomic) BOOL hasPercentile95;
@property (nonatomic) long long percentile95;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
