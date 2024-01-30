@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {
    struct { unsigned char exerciseMinutes : 1; unsigned char hourSinceMidnight : 1; } _has;
}

@property (nonatomic) BOOL hasHourSinceMidnight;
@property (nonatomic) long long hourSinceMidnight;
@property (nonatomic) BOOL hasExerciseMinutes;
@property (nonatomic) long long exerciseMinutes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
