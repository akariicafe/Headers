@interface AWDWiFiMetricsManagerRCU1CoexModeChange : PBCodable <NSCopying> {
    struct { unsigned char denyDuration : 1; unsigned char disableDuration : 1; unsigned char powerOnDuration : 1; unsigned char tddDuration : 1; unsigned char timestamp : 1; unsigned char channelNum : 1; unsigned char fwDenyCount : 1; unsigned char offWifiMode : 1; unsigned char onWifiMode : 1; unsigned char offAirplayMode : 1; unsigned char onAirplayMode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasChannelNum;
@property (nonatomic) unsigned int channelNum;
@property (nonatomic) BOOL hasOnWifiMode;
@property (nonatomic) unsigned int onWifiMode;
@property (nonatomic) BOOL hasOffWifiMode;
@property (nonatomic) unsigned int offWifiMode;
@property (nonatomic) BOOL hasOnAirplayMode;
@property (nonatomic) BOOL onAirplayMode;
@property (nonatomic) BOOL hasOffAirplayMode;
@property (nonatomic) BOOL offAirplayMode;
@property (nonatomic) BOOL hasPowerOnDuration;
@property (nonatomic) unsigned long long powerOnDuration;
@property (nonatomic) BOOL hasDisableDuration;
@property (nonatomic) unsigned long long disableDuration;
@property (nonatomic) BOOL hasDenyDuration;
@property (nonatomic) unsigned long long denyDuration;
@property (nonatomic) BOOL hasTddDuration;
@property (nonatomic) unsigned long long tddDuration;
@property (nonatomic) BOOL hasFwDenyCount;
@property (nonatomic) unsigned int fwDenyCount;

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
