@class HDCodableDateComponents;

@interface HDCodableMedicationScheduleIntervalData : PBCodable <NSCopying> {
    struct { unsigned char cycleIndex : 1; unsigned char cycleIntervalDays : 1; unsigned char dayOfWeek : 1; unsigned char dose : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStartTimeComponents;
@property (retain, nonatomic) HDCodableDateComponents *startTimeComponents;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) long long dayOfWeek;
@property (nonatomic) BOOL hasCycleIndex;
@property (nonatomic) long long cycleIndex;
@property (nonatomic) BOOL hasCycleIntervalDays;
@property (nonatomic) long long cycleIntervalDays;
@property (nonatomic) BOOL hasDose;
@property (nonatomic) double dose;

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
