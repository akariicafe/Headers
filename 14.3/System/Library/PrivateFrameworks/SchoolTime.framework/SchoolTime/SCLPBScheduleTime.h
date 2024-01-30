@interface SCLPBScheduleTime : PBCodable <NSCopying> {
    struct { unsigned char hour : 1; unsigned char minute : 1; } _has;
}

@property (nonatomic) BOOL hasHour;
@property (nonatomic) unsigned int hour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) unsigned int minute;

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
