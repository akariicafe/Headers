@class HKCodableDayIndexRange;

@interface HKCodableMenstrualCyclesProjection : PBCodable <NSCopying> {
    struct APPLE_181 { unsigned char daysOffsetFromCalendarMethod : 1; unsigned char endMean : 1; unsigned char endStandardDeviation : 1; unsigned char predictionPrimarySource : 1; unsigned char startMean : 1; unsigned char startStandardDeviation : 1; unsigned char isPartiallyLogged : 1; } _has;
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
@property (nonatomic) BOOL hasPredictionPrimarySource;
@property (nonatomic) long long predictionPrimarySource;

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

@end
