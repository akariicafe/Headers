@interface NTPBLocalNotificationReturn : PBCodable <NSCopying> {
    struct { unsigned char localNotificationSentTimestamp : 1; unsigned char localNoticationNumberReceived : 1; unsigned char localNotificationDirectOpenNumber : 1; unsigned char localNotificationType : 1; unsigned char localNotificationDirectOpen : 1; } _has;
}

@property (nonatomic) BOOL hasLocalNotificationDirectOpen;
@property (nonatomic) BOOL localNotificationDirectOpen;
@property (nonatomic) BOOL hasLocalNoticationNumberReceived;
@property (nonatomic) int localNoticationNumberReceived;
@property (nonatomic) BOOL hasLocalNotificationType;
@property (nonatomic) int localNotificationType;
@property (nonatomic) BOOL hasLocalNotificationSentTimestamp;
@property (nonatomic) long long localNotificationSentTimestamp;
@property (nonatomic) BOOL hasLocalNotificationDirectOpenNumber;
@property (nonatomic) int localNotificationDirectOpenNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
