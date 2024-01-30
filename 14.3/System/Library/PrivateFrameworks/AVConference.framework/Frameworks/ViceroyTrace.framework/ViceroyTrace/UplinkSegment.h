@class NSNumber, NSMutableDictionary;

@interface UplinkSegment : MultiwaySegment {
    NSMutableDictionary *_streamQualityAggregator;
}

@property unsigned long long totalCellTxDataBytes;
@property unsigned long long totalCellDupTxDataBytes;
@property NSNumber *wrmLinkTypeSuggestion;
@property NSNumber *wrmLinkTypeChangeReasonCode;
@property NSNumber *wrmLinkTypeWifiRSSI;
@property NSNumber *wrmLinkTypeWifiSNR;
@property NSNumber *wrmLinkTypeWifiCCA;
@property NSNumber *wrmLinkTypeWifiPacketLoss;
@property NSNumber *wrmLinkTypeCellSignalStrength;
@property NSNumber *wrmLinkTypeCellSignalBar;
@property NSNumber *wrmLinkTypeCellServingCellType;

- (void)dealloc;
- (void)addSegmentWRMReportStats:(id)a0;
- (id)segmentReport;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 delegate:(id)a2;
- (void)processFramerateEvent:(id)a0 forMetrics:(id)a1 withQuality:(id)a2 sumKey:(id)a3;
- (void)processBitrateEvent:(id)a0 forMetrics:(id)a1 withQuality:(id)a2 sumKey:(id)a3 counterKey:(id)a4;
- (id)calculateFramerate:(id)a0 forKey:(id)a1;
- (id)calculateBitrate:(id)a0 sumKey:(id)a1 counterKey:(id)a2;
- (void)addCellByteCountStats:(id)a0;
- (void)collectStreamQualityAggregator:(id)a0;
- (void)processVideoTransmitterStats:(id)a0;

@end
