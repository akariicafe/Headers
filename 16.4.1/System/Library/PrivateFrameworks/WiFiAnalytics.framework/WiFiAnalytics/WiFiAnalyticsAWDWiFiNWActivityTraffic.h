@interface WiFiAnalyticsAWDWiFiNWActivityTraffic : PBCodable <NSCopying> {
    struct { unsigned char value : 1; unsigned char traffic : 1; } _has;
}

@property (nonatomic) BOOL hasValue;
@property (nonatomic) unsigned long long value;
@property (nonatomic) BOOL hasTraffic;
@property (nonatomic) int traffic;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsTraffic:(id)a0;
- (id)trafficAsString:(int)a0;

@end
