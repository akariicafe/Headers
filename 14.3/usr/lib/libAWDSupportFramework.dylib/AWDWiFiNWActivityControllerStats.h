@class AWDWiFiNWActivityScanActivity, AWDWiFiNWActivityAggregateMetrics, AWDWiFiNWActivityBtCoex, AWDWiFiNWActivityRateAndAggregation, AWDWiFiNWActivityPowerPStats, AWDWiFiNWActivityImpedingFunctions;

@interface AWDWiFiNWActivityControllerStats : PBCodable <NSCopying> {
    struct { unsigned char backoffStuck : 1; unsigned char channel : 1; unsigned char channelBandwidth : 1; unsigned char channelsVisited0 : 1; unsigned char channelsVisited1 : 1; unsigned char controllerResets : 1; } _has;
}

@property (nonatomic) BOOL hasControllerResets;
@property (nonatomic) unsigned int controllerResets;
@property (nonatomic) BOOL hasBackoffStuck;
@property (nonatomic) unsigned int backoffStuck;
@property (readonly, nonatomic) BOOL hasScanActivity;
@property (retain, nonatomic) AWDWiFiNWActivityScanActivity *scanActivity;
@property (readonly, nonatomic) BOOL hasPowerActivity;
@property (retain, nonatomic) AWDWiFiNWActivityPowerPStats *powerActivity;
@property (readonly, nonatomic) BOOL hasImpedingFunctions;
@property (retain, nonatomic) AWDWiFiNWActivityImpedingFunctions *impedingFunctions;
@property (readonly, nonatomic) BOOL hasAggregateMetrics;
@property (retain, nonatomic) AWDWiFiNWActivityAggregateMetrics *aggregateMetrics;
@property (readonly, nonatomic) BOOL hasBtCoex;
@property (retain, nonatomic) AWDWiFiNWActivityBtCoex *btCoex;
@property (nonatomic) BOOL hasChannelsVisited0;
@property (nonatomic) unsigned int channelsVisited0;
@property (nonatomic) BOOL hasChannelsVisited1;
@property (nonatomic) unsigned int channelsVisited1;
@property (readonly, nonatomic) BOOL hasPhyrate;
@property (retain, nonatomic) AWDWiFiNWActivityRateAndAggregation *phyrate;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) unsigned int channel;
@property (nonatomic) BOOL hasChannelBandwidth;
@property (nonatomic) unsigned int channelBandwidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
