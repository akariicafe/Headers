@class HKCodableDateInterval, NSMutableArray;

@interface HKCodableSleepPeriodSegment : PBCodable <NSCopying> {
    struct APPLE_117 { unsigned char category : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (retain, nonatomic) NSMutableArray *sampleIntervals;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;

+ (Class)sampleIntervalType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSampleInterval:(id)a0;
- (void)clearSampleIntervals;
- (id)sampleIntervalAtIndex:(unsigned long long)a0;
- (unsigned long long)sampleIntervalsCount;

@end
