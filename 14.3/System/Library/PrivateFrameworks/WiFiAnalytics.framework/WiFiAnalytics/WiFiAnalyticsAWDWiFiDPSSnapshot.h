@class WiFiAnalyticsAWDWiFiDPSAWDLSnapshot, WiFiAnalyticsAWDWiFiDPSBTSnapshot, WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot;

@interface WiFiAnalyticsAWDWiFiDPSSnapshot : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotBE;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotBK;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotVO;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotVI;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI;
@property (readonly, nonatomic) BOOL hasBtSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSBTSnapshot *btSnapshot;
@property (readonly, nonatomic) BOOL hasAwdlSnapshot;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiDPSAWDLSnapshot *awdlSnapshot;

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
