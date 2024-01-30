@interface NTPBLocalNotificationReceived : PBCodable <NSCopying> {
    struct { unsigned char localNotificationNumberReceived : 1; } _has;
}

@property (nonatomic) BOOL hasLocalNotificationNumberReceived;
@property (nonatomic) int localNotificationNumberReceived;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
