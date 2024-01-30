@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineTransitionEvent : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char timestamp : 1; unsigned char mode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasFrom;
@property (retain, nonatomic) HDAWDHealthKitRoutineLocation *from;
@property (readonly, nonatomic) BOOL hasTo;
@property (retain, nonatomic) HDAWDHealthKitRoutineLocation *to;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) long long endDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)modeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
