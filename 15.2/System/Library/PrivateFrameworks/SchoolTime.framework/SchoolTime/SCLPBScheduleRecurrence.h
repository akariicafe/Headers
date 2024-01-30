@class SCLPBTimeInterval;

@interface SCLPBScheduleRecurrence : PBCodable <NSCopying> {
    struct { unsigned char day : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimeInterval;
@property (retain, nonatomic) SCLPBTimeInterval *timeInterval;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) int day;

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
- (id)dayAsString:(int)a0;
- (int)StringAsDay:(id)a0;

@end
