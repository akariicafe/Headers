@interface BLTPBDateComponents : PBCodable <NSCopying> {
    struct { unsigned char hour : 1; unsigned char minute : 1; unsigned char second : 1; unsigned char weekday : 1; } _has;
}

@property (nonatomic) BOOL hasSecond;
@property (nonatomic) int second;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) int hour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) int minute;
@property (nonatomic) BOOL hasWeekday;
@property (nonatomic) int weekday;

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
