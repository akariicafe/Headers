@class NSArray, NSDictionary, VCSessionBandwidthAllocationTable;

@interface VCSessionUplinkBandwidthAllocator : VCObject {
    VCSessionBandwidthAllocationTable *_table;
    NSDictionary *_currentTable;
    BOOL _redundancyEnabled;
    BOOL _redundancyEnabledFor720Stream;
}

@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isRedundancyEnabled) BOOL redundancyEnabled;
@property (readonly, nonatomic) NSArray *videoStreamIDs;
@property (readonly, nonatomic) NSArray *videoRepairStreamIDs;
@property (readonly, nonatomic, getter=getBitrateToStreamTable) NSDictionary *bitrateToStreamTable;
@property (nonatomic, getter=isRedundancyEnabledFor720Stream) BOOL redundancyEnabledFor720Stream;

- (id)init;
- (void)dealloc;
- (void)_recomputeCurrentTable;
- (id)_audioEntriesForTargetBitrate:(unsigned int)a0;
- (id)_videoEntriesForTargetBitrate:(unsigned int)a0 remainingBitrate:(unsigned int *)a1;
- (void)addBandwidthAllocationTableEntry:(id)a0 updateNow:(BOOL)a1;
- (BOOL)peerSubscription:(BOOL)a0 streamID:(unsigned short)a1;
- (id)audioStreamIDsforTargetBitrate:(unsigned int)a0;
- (id)audioRepairStreamIDsforTargetBitrate:(unsigned int)a0;
- (id)videoStreamsAndMediaBitratesForTargetNetworkBitrate:(unsigned int)a0;
- (id)videoBitratesForTargetNetworkBitrate:(unsigned int)a0;
- (id)videoStreamIDsforTargetBitrate:(unsigned int)a0;
- (id)videoStreamIDsforTargetBitrateCap:(unsigned int)a0;
- (id)videoRepairStreamIDsForStreamIDs;
- (id)audioRepairStreamIDsForStreamIDs;

@end
