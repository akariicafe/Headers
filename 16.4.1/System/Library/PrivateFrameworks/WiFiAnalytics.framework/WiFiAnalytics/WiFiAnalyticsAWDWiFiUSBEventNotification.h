@interface WiFiAnalyticsAWDWiFiUSBEventNotification : PBCodable <NSCopying> {
    struct { unsigned char durationSinceUSBEventInSeconds : 1; unsigned char usbAction : 1; unsigned char usbTotal : 1; unsigned char isVendorApple : 1; unsigned char smartCCADesenseSupported : 1; } _has;
}

@property (nonatomic) BOOL hasUsbAction;
@property (nonatomic) unsigned int usbAction;
@property (nonatomic) BOOL hasUsbTotal;
@property (nonatomic) unsigned int usbTotal;
@property (nonatomic) BOOL hasDurationSinceUSBEventInSeconds;
@property (nonatomic) unsigned long long durationSinceUSBEventInSeconds;
@property (nonatomic) BOOL hasIsVendorApple;
@property (nonatomic) BOOL isVendorApple;
@property (nonatomic) BOOL hasSmartCCADesenseSupported;
@property (nonatomic) BOOL smartCCADesenseSupported;

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
