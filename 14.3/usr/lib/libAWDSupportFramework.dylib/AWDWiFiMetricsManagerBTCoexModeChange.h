@interface AWDWiFiMetricsManagerBTCoexModeChange : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char a2dpConnectionCount : 1; unsigned char clamshellClosed : 1; unsigned char coexMode : 1; unsigned char hidConnectionCount : 1; unsigned char rssi : 1; unsigned char scoConnectionCount : 1; unsigned char wifiInfraChainConfig : 1; unsigned char wifiInfraChannel : 1; unsigned char wifiInfraPhyMode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCoexMode;
@property (nonatomic) unsigned int coexMode;
@property (nonatomic) BOOL hasA2dpConnectionCount;
@property (nonatomic) unsigned int a2dpConnectionCount;
@property (nonatomic) BOOL hasHidConnectionCount;
@property (nonatomic) unsigned int hidConnectionCount;
@property (nonatomic) BOOL hasScoConnectionCount;
@property (nonatomic) unsigned int scoConnectionCount;
@property (nonatomic) BOOL hasWifiInfraChannel;
@property (nonatomic) unsigned int wifiInfraChannel;
@property (nonatomic) BOOL hasWifiInfraChainConfig;
@property (nonatomic) unsigned int wifiInfraChainConfig;
@property (nonatomic) BOOL hasWifiInfraPhyMode;
@property (nonatomic) unsigned int wifiInfraPhyMode;
@property (nonatomic) BOOL hasClamshellClosed;
@property (nonatomic) unsigned int clamshellClosed;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;

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
