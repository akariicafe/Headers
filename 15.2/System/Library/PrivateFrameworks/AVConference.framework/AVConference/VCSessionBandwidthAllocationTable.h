@class NSDictionary, NSMutableDictionary;

@interface VCSessionBandwidthAllocationTable : VCObject {
    unsigned char _type;
    NSMutableDictionary *_streamTokenEntries;
    NSMutableDictionary *_sortedEntriesForStreamToken;
    NSMutableDictionary *_streamIDToEntryTable;
    unsigned int _currentScreenEncoderGroupCount;
    unsigned int _maxActiveScreenEncoders;
    BOOL _shouldScreenCapEncoderCount;
}

@property (readonly, nonatomic) NSDictionary *audioOnlyBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSDictionary *audioVideoBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSDictionary *videoOnlyBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSDictionary *videoStreamIdToRepairStreamIdMap;

- (id)initWithType:(unsigned char)a0;
- (void)dealloc;
- (void)addBandwidthAllocationTableEntry:(id)a0;
- (id)entryForStreamID:(id)a0;
- (BOOL)shouldUseRepairBitrateForEntry:(id)a0 isRedundancyEnabled:(BOOL)a1 isRedundancyEnabledFor720Stream:(BOOL)a2;
- (id)tableEntriesForStreamToken:(long long)a0;
- (id)newAggregatedBandwidthTableWithRedundancy:(BOOL)a0 redundancyEnabledFor720Stream:(BOOL)a1 enableMap:(id)a2;
- (BOOL)shouldAddBackupEntry:(id)a0 referenceTable:(id)a1 referenceQualityIndices:(id)a2;
- (void)cleanupStreamTokenEntries:(id)a0 currentNetworkBitrate:(unsigned int *)a1 isRedundancyEnabled:(BOOL)a2 screenEncoderGroups:(id)a3;
- (BOOL)shouldAppendEntry:(id)a0 screenEncoderGroups:(id)a1;
- (void)appendEntry:(id)a0 streamTokenEntries:(id)a1 currentNetworkBitrate:(unsigned int *)a2 shouldUseRepairBitrate:(BOOL)a3 screenEncoderGroups:(id)a4;
- (void)printTable:(id)a0;

@end
