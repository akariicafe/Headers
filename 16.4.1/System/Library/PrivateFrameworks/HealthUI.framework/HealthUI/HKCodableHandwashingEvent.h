@class HKCodableQuantity;

@interface HKCodableHandwashingEvent : PBCodable <NSCopying> {
    struct APPLE_107 { unsigned char averageDailyCount : 1; unsigned char count : 1; unsigned char endDate : 1; unsigned char startDate : 1; unsigned char meetsGoal : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasAverageDuration;
@property (retain, nonatomic) HKCodableQuantity *averageDuration;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (nonatomic) BOOL hasAverageDailyCount;
@property (nonatomic) long long averageDailyCount;
@property (nonatomic) BOOL hasMeetsGoal;
@property (nonatomic) BOOL meetsGoal;

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
