@class AWDWiFiDPSAWDLSnapshot, AWDWiFiDPSBTSnapshot, AWDWiFiDPSPerACTxCompletionSnapshot, AWDWiFiUsageSnapshot;

@interface AWDWiFiDPSSnapshot : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotBE;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotBK;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotVO;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO;
@property (readonly, nonatomic) BOOL hasTxCompletionSnapshotVI;
@property (retain, nonatomic) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI;
@property (readonly, nonatomic) BOOL hasBtSnapshot;
@property (retain, nonatomic) AWDWiFiDPSBTSnapshot *btSnapshot;
@property (readonly, nonatomic) BOOL hasAwdlSnapshot;
@property (retain, nonatomic) AWDWiFiDPSAWDLSnapshot *awdlSnapshot;
@property (readonly, nonatomic) BOOL hasRc1Snapshot;
@property (retain, nonatomic) AWDWiFiUsageSnapshot *rc1Snapshot;
@property (readonly, nonatomic) BOOL hasRc2Snapshot;
@property (retain, nonatomic) AWDWiFiUsageSnapshot *rc2Snapshot;
@property (readonly, nonatomic) BOOL hasLteSnapshot;
@property (retain, nonatomic) AWDWiFiUsageSnapshot *lteSnapshot;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
