@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <NSCopying> {
    struct { unsigned char mean : 1; unsigned char median : 1; unsigned char percentile25 : 1; unsigned char percentile75 : 1; unsigned char stddev : 1; } _has;
}

@property (nonatomic) BOOL hasMean;
@property (nonatomic) long long mean;
@property (nonatomic) BOOL hasStddev;
@property (nonatomic) long long stddev;
@property (nonatomic) BOOL hasPercentile25;
@property (nonatomic) long long percentile25;
@property (nonatomic) BOOL hasPercentile75;
@property (nonatomic) long long percentile75;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) long long median;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
