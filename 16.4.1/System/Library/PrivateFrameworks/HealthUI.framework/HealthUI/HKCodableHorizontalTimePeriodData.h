@class NSMutableArray;

@interface HKCodableHorizontalTimePeriodData : PBCodable <NSCopying> {
    struct APPLE_157 { unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) long long value;
@property (retain, nonatomic) NSMutableArray *dateIntervals;

+ (Class)dateIntervalsType;

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
- (void)addDateIntervals:(id)a0;
- (void)clearDateIntervals;
- (id)dateIntervalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dateIntervalsCount;

@end
