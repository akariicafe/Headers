@class NSString, WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats, WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats, WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDLinkQualityMeasurements, NSMutableArray;

@interface WiFiAnalyticsAWDWiFiNWActivity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *activities;
@property (retain, nonatomic) NSMutableArray *interfaceStats;
@property (retain, nonatomic) NSMutableArray *peerStats;
@property (readonly, nonatomic) BOOL hasControllerStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) BOOL hasLinkQualSample;
@property (retain, nonatomic) WiFiAnalyticsAWDLinkQualityMeasurements *linkQualSample;
@property (retain, nonatomic) NSMutableArray *scores;
@property (retain, nonatomic) NSMutableArray *btleConnections;
@property (readonly, nonatomic) BOOL hasApProfile;
@property (retain, nonatomic) NSString *apProfile;
@property (readonly, nonatomic) BOOL hasAwdlIfStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAWDLInterfaceStats *awdlIfStats;
@property (readonly, nonatomic) BOOL hasApIfStats;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityAPInterfaceStats *apIfStats;

+ (Class)activitiesType;
+ (Class)btleConnectionType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;
+ (Class)scoreType;

- (unsigned long long)scoresCount;
- (void)clearScores;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addScore:(id)a0;
- (unsigned long long)activitiesCount;
- (void)clearActivities;
- (id)activitiesAtIndex:(unsigned long long)a0;
- (void)addActivities:(id)a0;
- (void)addBtleConnection:(id)a0;
- (void)addInterfaceStats:(id)a0;
- (void)addPeerStats:(id)a0;
- (id)btleConnectionAtIndex:(unsigned long long)a0;
- (unsigned long long)btleConnectionsCount;
- (void)clearBtleConnections;
- (void)clearInterfaceStats;
- (void)clearPeerStats;
- (id)interfaceStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)interfaceStatsCount;
- (id)peerStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerStatsCount;
- (id)scoreAtIndex:(unsigned long long)a0;

@end
