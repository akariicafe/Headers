@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char bt : 1; unsigned char usb : 1; unsigned char wifi : 1; } _has;
}

@property (nonatomic) BOOL hasWifi;
@property (nonatomic) unsigned int wifi;
@property (nonatomic) BOOL hasBt;
@property (nonatomic) unsigned int bt;
@property (nonatomic) BOOL hasUsb;
@property (nonatomic) unsigned int usb;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
