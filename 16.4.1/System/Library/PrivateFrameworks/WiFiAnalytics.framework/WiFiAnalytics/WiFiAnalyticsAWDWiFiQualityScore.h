@interface WiFiAnalyticsAWDWiFiQualityScore : PBCodable <NSCopying> {
    struct { unsigned char channelQuality : 1; unsigned char rxLatency : 1; unsigned char rxLoss : 1; unsigned char txLatency : 1; unsigned char txLoss : 1; } _has;
}

@property (nonatomic) BOOL hasChannelQuality;
@property (nonatomic) unsigned int channelQuality;
@property (nonatomic) BOOL hasTxLoss;
@property (nonatomic) unsigned int txLoss;
@property (nonatomic) BOOL hasRxLoss;
@property (nonatomic) unsigned int rxLoss;
@property (nonatomic) BOOL hasTxLatency;
@property (nonatomic) unsigned int txLatency;
@property (nonatomic) BOOL hasRxLatency;
@property (nonatomic) unsigned int rxLatency;

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
