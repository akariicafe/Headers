@class NSDictionary, VCSessionBandwidthAllocationTable, NSMutableDictionary;

@interface VCSessionUplinkBandwidthAllocator : VCObject {
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    NSMutableDictionary *_streamTokenToEnableMap;
    BOOL _redundancyEnabled;
    BOOL _redundancyEnabledFor720Stream;
}

@property (nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property (readonly, nonatomic, getter=getBitrateToStreamTable) NSDictionary *bitrateToStreamTable;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) BOOL redundancyEnabledFor720Stream;

- (id)init;
- (void)dealloc;
- (void)_recomputeCurrentTable;
- (id)tableEntriesForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1 remainingBitrate:(unsigned int *)a2 isLastEntryForStreamToken:(BOOL *)a3;
- (void)addBandwidthAllocationTableEntry:(id)a0 updateNow:(BOOL)a1;
- (void)streamToken:(long long)a0 enabled:(BOOL)a1;
- (BOOL)isEnabledStreamToken:(long long)a0;
- (BOOL)peerSubscription:(BOOL)a0 streamID:(unsigned short)a1;
- (id)mediaBitratesForStreamToken:(long long)a0 targetNetworkBitrate:(unsigned int)a1;
- (id)streamIDsForStreamToken:(long long)a0;
- (id)repairStreamIDsForStreamToken:(long long)a0;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrateCap:(unsigned int)a1;

@end
