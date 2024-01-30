@class SCLPBScheduleTime;

@interface SCLPBTimeInterval : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStartTime;
@property (retain, nonatomic) SCLPBScheduleTime *startTime;
@property (readonly, nonatomic) BOOL hasEndTime;
@property (retain, nonatomic) SCLPBScheduleTime *endTime;

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
