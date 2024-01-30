@class AWDLinkQualityMeasurements, NSMutableArray, AWDWiFiNWActivityControllerStats;

@interface AWDWiFiNWActivity : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *activities;
@property (retain, nonatomic) NSMutableArray *interfaceStats;
@property (retain, nonatomic) NSMutableArray *peerStats;
@property (readonly, nonatomic) BOOL hasControllerStats;
@property (retain, nonatomic) AWDWiFiNWActivityControllerStats *controllerStats;
@property (readonly, nonatomic) BOOL hasLinkQualSample;
@property (retain, nonatomic) AWDLinkQualityMeasurements *linkQualSample;

+ (Class)activitiesType;
+ (Class)interfaceStatsType;
+ (Class)peerStatsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)addActivities:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)activitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)activitiesCount;
- (void)clearActivities;
- (void)addInterfaceStats:(id)a0;
- (void)addPeerStats:(id)a0;
- (unsigned long long)interfaceStatsCount;
- (void)clearInterfaceStats;
- (id)interfaceStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerStatsCount;
- (void)clearPeerStats;
- (id)peerStatsAtIndex:(unsigned long long)a0;

@end
