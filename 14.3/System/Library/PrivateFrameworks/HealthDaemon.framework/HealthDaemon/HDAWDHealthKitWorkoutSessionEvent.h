@class NSString;

@interface HDAWDHealthKitWorkoutSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char activityType : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) int activityType;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;

- (id)eventTypeAsString:(int)a0;
- (int)StringAsEventType:(id)a0;
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
- (id)activityTypeAsString:(int)a0;
- (int)StringAsActivityType:(id)a0;

@end
