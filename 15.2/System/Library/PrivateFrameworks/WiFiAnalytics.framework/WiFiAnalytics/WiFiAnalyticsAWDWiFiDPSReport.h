@class WiFiAnalyticsAWDWiFiDPSSnapshot, NSMutableArray, WiFiAnalyticsAWDWiFiDPSEpilogue;

@interface WiFiAnalyticsAWDWiFiDPSReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *stallNotifications;
@property (retain, nonatomic) NSMutableArray *probeResults;
@property (retain, nonatomic) NSMutableArray *dpsCounterSamples;
@property (readonly, nonatomic) BOOL hasDpsEpiloge;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSEpilogue *dpsEpiloge;
@property (readonly, nonatomic) BOOL hasSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSSnapshot *snapshot;
@property (retain, nonatomic) NSMutableArray *usbEvents;

+ (Class)stallNotificationType;
+ (Class)probeResultType;
+ (Class)dpsCounterSampleType;
+ (Class)usbEventType;

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
- (void)addStallNotification:(id)a0;
- (void)addProbeResult:(id)a0;
- (void)addDpsCounterSample:(id)a0;
- (void)addUsbEvent:(id)a0;
- (unsigned long long)stallNotificationsCount;
- (void)clearStallNotifications;
- (id)stallNotificationAtIndex:(unsigned long long)a0;
- (unsigned long long)probeResultsCount;
- (void)clearProbeResults;
- (id)probeResultAtIndex:(unsigned long long)a0;
- (unsigned long long)dpsCounterSamplesCount;
- (void)clearDpsCounterSamples;
- (id)dpsCounterSampleAtIndex:(unsigned long long)a0;
- (unsigned long long)usbEventsCount;
- (void)clearUsbEvents;
- (id)usbEventAtIndex:(unsigned long long)a0;

@end
