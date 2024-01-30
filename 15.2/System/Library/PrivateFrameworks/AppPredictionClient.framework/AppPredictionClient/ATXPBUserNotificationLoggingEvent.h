@class NSString, ATXPBUserNotification;

@interface ATXPBUserNotificationLoggingEvent : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char deliveryReason : 1; unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) ATXPBUserNotification *notification;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasModeIdentifier;
@property (retain, nonatomic) NSString *modeIdentifier;
@property (nonatomic) BOOL hasDeliveryReason;
@property (nonatomic) int deliveryReason;

- (int)StringAsEventType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsDeliveryReason:(id)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)eventTypeAsString:(int)a0;
- (unsigned long long)hash;
- (id)deliveryReasonAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
