@class NSString, NSDictionary, VCSessionBandwidthAllocationTable, NSMutableDictionary;

@interface VCSessionUplinkBandwidthAllocatorMultiway : VCObject <VCSessionUplinkBandwidthAllocator> {
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    NSMutableDictionary *_streamTokenToEnableMap;
    BOOL _redundancyEnabled;
    BOOL _redundancyEnabledFor720Stream;
}

@property (nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) BOOL redundancyEnabledFor720Stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_recomputeCurrentTable;
- (void)addBandwidthAllocationTableEntry:(id)a0 updateNow:(BOOL)a1;
- (id)getBitrateToStreamTable;
- (BOOL)isEnabledStreamToken:(long long)a0;
- (id)mediaBitratesForStreamToken:(long long)a0 targetNetworkBitrate:(unsigned int)a1;
- (BOOL)peerSubscription:(BOOL)a0 streamID:(unsigned short)a1;
- (id)repairStreamIDsForStreamToken:(long long)a0;
- (id)streamIDsForStreamToken:(long long)a0;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1;
- (id)streamIDsForStreamToken:(long long)a0 targetBitrateCap:(unsigned int)a1;
- (void)streamToken:(long long)a0 enabled:(BOOL)a1;
- (id)tableEntriesForStreamToken:(long long)a0 targetBitrate:(unsigned int)a1 remainingBitrate:(unsigned int *)a2 isLastEntryForStreamToken:(BOOL *)a3;

@end
