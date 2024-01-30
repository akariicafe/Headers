@interface AWDCoreRoutineFMCDailyAssessment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char assistances : 1; unsigned char assistedParkingEvents : 1; unsigned char duration : 1; unsigned char engagedParkingEvents : 1; unsigned char engagements : 1; unsigned char locationType : 1; unsigned char parkingEvents : 1; unsigned char suppressedParkingEvents : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) int duration;
@property (nonatomic) BOOL hasParkingEvents;
@property (nonatomic) int parkingEvents;
@property (nonatomic) BOOL hasEngagedParkingEvents;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) BOOL hasAssistedParkingEvents;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) BOOL hasEngagements;
@property (nonatomic) int engagements;
@property (nonatomic) BOOL hasAssistances;
@property (nonatomic) int assistances;
@property (nonatomic) BOOL hasSuppressedParkingEvents;
@property (nonatomic) int suppressedParkingEvents;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

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
