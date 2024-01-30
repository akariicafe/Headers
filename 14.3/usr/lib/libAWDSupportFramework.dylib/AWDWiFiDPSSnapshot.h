@class AWDWiFiDPSBTSnapshot, AWDWiFiDPSAWDLSnapshot, AWDWiFiDPSPerACTxCompletionSnapshot;

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
