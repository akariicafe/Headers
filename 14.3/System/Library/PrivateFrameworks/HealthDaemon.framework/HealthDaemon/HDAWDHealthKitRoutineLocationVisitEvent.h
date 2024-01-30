@class HDAWDHealthKitRoutineLocation;

@interface HDAWDHealthKitRoutineLocationVisitEvent : PBCodable <NSCopying> {
    struct { unsigned char arrivalDate : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) HDAWDHealthKitRoutineLocation *location;
@property (nonatomic) BOOL hasArrivalDate;
@property (nonatomic) long long arrivalDate;

- (void).cxx_destruct;
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
