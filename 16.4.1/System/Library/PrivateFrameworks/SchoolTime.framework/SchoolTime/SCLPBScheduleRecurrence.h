@class SCLPBTimeInterval;

@interface SCLPBScheduleRecurrence : PBCodable <NSCopying> {
    struct { unsigned char day : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimeInterval;
@property (retain, nonatomic) SCLPBTimeInterval *timeInterval;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) int day;

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
- (int)StringAsDay:(id)a0;
- (id)dayAsString:(int)a0;

@end
