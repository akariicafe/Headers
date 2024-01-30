@interface AWDPowerTouchMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char tocuhTotalUserInteractionDuration : 1; unsigned char touchStateActiveDuration : 1; unsigned char touchStateAnticipateDuration : 1; unsigned char touchStateOffDuration : 1; unsigned char touchStateOnDuration : 1; unsigned char touchStateOthersDuration : 1; unsigned char touchStateReadyDuration : 1; unsigned char touchTotalPowerMicroWatt : 1; unsigned char touchTotalUserTouchCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTouchStateActiveDuration;
@property (nonatomic) unsigned int touchStateActiveDuration;
@property (nonatomic) BOOL hasTouchStateReadyDuration;
@property (nonatomic) unsigned int touchStateReadyDuration;
@property (nonatomic) BOOL hasTouchStateAnticipateDuration;
@property (nonatomic) unsigned int touchStateAnticipateDuration;
@property (nonatomic) BOOL hasTouchStateOffDuration;
@property (nonatomic) unsigned int touchStateOffDuration;
@property (nonatomic) BOOL hasTouchStateOnDuration;
@property (nonatomic) unsigned int touchStateOnDuration;
@property (nonatomic) BOOL hasTouchStateOthersDuration;
@property (nonatomic) unsigned int touchStateOthersDuration;
@property (nonatomic) BOOL hasTouchTotalPowerMicroWatt;
@property (nonatomic) unsigned int touchTotalPowerMicroWatt;
@property (nonatomic) BOOL hasTouchTotalUserTouchCount;
@property (nonatomic) unsigned int touchTotalUserTouchCount;
@property (nonatomic) BOOL hasTocuhTotalUserInteractionDuration;
@property (nonatomic) unsigned int tocuhTotalUserInteractionDuration;

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
