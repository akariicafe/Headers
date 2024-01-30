@class HKCodableDayIndexRange;

@interface HKCodableMenstrualCyclesProjection : PBCodable <NSCopying> {
    struct { unsigned char daysOffsetFromCalendarMethod : 1; unsigned char endMean : 1; unsigned char endStandardDeviation : 1; unsigned char startMean : 1; unsigned char startStandardDeviation : 1; unsigned char isPartiallyLogged : 1; } _has;
}

@property (nonatomic) BOOL hasStartMean;
@property (nonatomic) double startMean;
@property (nonatomic) BOOL hasStartStandardDeviation;
@property (nonatomic) double startStandardDeviation;
@property (nonatomic) BOOL hasEndMean;
@property (nonatomic) double endMean;
@property (nonatomic) BOOL hasEndStandardDeviation;
@property (nonatomic) double endStandardDeviation;
@property (readonly, nonatomic) BOOL hasAllDays;
@property (retain, nonatomic) HKCodableDayIndexRange *allDays;
@property (nonatomic) BOOL hasIsPartiallyLogged;
@property (nonatomic) BOOL isPartiallyLogged;
@property (nonatomic) BOOL hasDaysOffsetFromCalendarMethod;
@property (nonatomic) long long daysOffsetFromCalendarMethod;

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
