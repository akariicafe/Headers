@class NSString, WiFiAnalyticsAWDWiFiNWActivityControllerStats, WiFiAnalyticsAWDLinkQualityMeasurements, NSMutableArray;

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

+ (Class)activitiesType;
+ (Class)scoreType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;
+ (Class)btleConnectionType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearScores;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)scoresCount;
- (unsigned long long)activitiesCount;
- (void)clearActivities;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)addScore:(id)a0;
- (id)dictionaryRepresentation;
- (void)addActivities:(id)a0;
- (id)activitiesAtIndex:(unsigned long long)a0;
- (void)addInterfaceStats:(id)a0;
- (void)addPeerStats:(id)a0;
- (void)addBtleConnection:(id)a0;
- (unsigned long long)interfaceStatsCount;
- (void)clearInterfaceStats;
- (id)interfaceStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerStatsCount;
- (void)clearPeerStats;
- (id)peerStatsAtIndex:(unsigned long long)a0;
- (id)scoreAtIndex:(unsigned long long)a0;
- (unsigned long long)btleConnectionsCount;
- (void)clearBtleConnections;
- (id)btleConnectionAtIndex:(unsigned long long)a0;

@end
