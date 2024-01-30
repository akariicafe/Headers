@class WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation, WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions, WiFiAnalyticsAWDWiFiNWActivityPowerPStats, WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics, WiFiAnalyticsAWDWiFiNWActivityBtCoex, WiFiAnalyticsAWDWiFiNWActivityScanActivity;

@interface WiFiAnalyticsAWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {
    struct { unsigned char backoffStuck : 1; unsigned char channel : 1; unsigned char channelBandwidth : 1; unsigned char channelsVisited0 : 1; unsigned char channelsVisited1 : 1; unsigned char controllerResets : 1; } _has;
}

@property (nonatomic) BOOL hasControllerResets;
@property (nonatomic) unsigned int controllerResets;
@property (nonatomic) BOOL hasBackoffStuck;
@property (nonatomic) unsigned int backoffStuck;
@property (readonly, nonatomic) BOOL hasScanActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityScanActivity *scanActivity;
@property (readonly, nonatomic) BOOL hasPowerActivity;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityPowerPStats *powerActivity;
@property (readonly, nonatomic) BOOL hasImpedingFunctions;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityImpedingFunctions *impedingFunctions;
@property (readonly, nonatomic) BOOL hasAggregateMetrics;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAggregateMetrics *aggregateMetrics;
@property (readonly, nonatomic) BOOL hasBtCoex;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityBtCoex *btCoex;
@property (nonatomic) BOOL hasChannelsVisited0;
@property (nonatomic) unsigned int channelsVisited0;
@property (nonatomic) BOOL hasChannelsVisited1;
@property (nonatomic) unsigned int channelsVisited1;
@property (readonly, nonatomic) BOOL hasPhyrate;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityRateAndAggregation *phyrate;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelBandwidth;
@property (nonatomic) unsigned int channelBandwidth;

- (void).cxx_destruct;
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
