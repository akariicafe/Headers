@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepPeriodSegment : PBCodable <NSCopying> {
    struct { unsigned char category : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *sampleIntervals;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;

+ (Class)sampleIntervalType;

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
- (void)addSampleInterval:(id)a0;
- (unsigned long long)sampleIntervalsCount;
- (void)clearSampleIntervals;
- (id)sampleIntervalAtIndex:(unsigned long long)a0;

@end
