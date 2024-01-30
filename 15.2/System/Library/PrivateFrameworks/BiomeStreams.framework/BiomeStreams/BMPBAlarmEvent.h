@class NSString;

@interface BMPBAlarmEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; unsigned char isSleepAlarm : 1; } _has;
}

@property (nonatomic) BOOL hasIsSleepAlarm;
@property (nonatomic) BOOL isSleepAlarm;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (readonly, nonatomic) BOOL hasAlarmID;
@property (retain, nonatomic) NSString *alarmID;

- (int)StringAsEventType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
