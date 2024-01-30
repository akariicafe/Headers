@class AWDWiFiDPSEpilogue, NSMutableArray, AWDWiFiDPSSnapshot;

@interface AWDWiFiDPSReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *stallNotifications;
@property (retain, nonatomic) NSMutableArray *probeResults;
@property (retain, nonatomic) NSMutableArray *dpsCounterSamples;
@property (readonly, nonatomic) BOOL hasDpsEpiloge;
@property (retain, nonatomic) AWDWiFiDPSEpilogue *dpsEpiloge;
@property (readonly, nonatomic) BOOL hasSnapshot;
@property (retain, nonatomic) AWDWiFiDPSSnapshot *snapshot;

+ (Class)stallNotificationType;
+ (Class)probeResultType;
+ (Class)dpsCounterSampleType;

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
- (void)addStallNotification:(id)a0;
- (void)addProbeResult:(id)a0;
- (void)addDpsCounterSample:(id)a0;
- (unsigned long long)stallNotificationsCount;
- (void)clearStallNotifications;
- (id)stallNotificationAtIndex:(unsigned long long)a0;
- (unsigned long long)probeResultsCount;
- (void)clearProbeResults;
- (id)probeResultAtIndex:(unsigned long long)a0;
- (unsigned long long)dpsCounterSamplesCount;
- (void)clearDpsCounterSamples;
- (id)dpsCounterSampleAtIndex:(unsigned long long)a0;

@end
