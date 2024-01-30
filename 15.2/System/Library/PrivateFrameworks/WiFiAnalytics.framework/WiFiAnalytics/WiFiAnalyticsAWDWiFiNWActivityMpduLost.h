@class WiFiAnalyticsAWDWiFiNWActivityMpduWME;

@interface WiFiAnalyticsAWDWiFiNWActivityMpduLost : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *bALost;
@property (readonly, nonatomic) BOOL hasNonBALost;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityMpduWME *nonBALost;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
