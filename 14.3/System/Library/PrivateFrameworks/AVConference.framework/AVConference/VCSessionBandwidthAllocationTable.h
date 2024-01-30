@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface VCSessionBandwidthAllocationTable : VCObject {
    unsigned char _type;
    NSMutableArray *_sortedAudioEntries;
    NSMutableArray *_sortedVideoEntries;
    NSMutableDictionary *_videoStreamIdToRepairStreamIdMap;
    NSMutableDictionary *_audioTable;
    NSMutableDictionary *_videoTable;
    NSMutableDictionary *_streamIDToEntryTable;
}

@property (readonly, nonatomic) NSMutableDictionary *audioOnlyBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSMutableDictionary *audioVideoBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSMutableDictionary *videoOnlyBitrateToStreamIDsTable;
@property (readonly, nonatomic) NSArray *audioEntries;
@property (readonly, nonatomic) NSArray *videoEntries;
@property (readonly, nonatomic) NSDictionary *videoStreamIdToRepairStreamIdMap;

- (void)dealloc;
- (void)generate;
- (id)initWithType:(unsigned char)a0;
- (void)addBandwidthAllocationTableEntry:(id)a0;
- (id)entryForStreamID:(id)a0;
- (id)newAggregatedBandwidthTableWithRedundancy:(BOOL)a0 videoEnabled:(BOOL)a1 redundancyEnabledFor720Stream:(BOOL)a2;
- (void)_generateSortedAudioEntries;
- (void)_generateSortedVideoEntries;
- (void)_generateVideoStreamIDToRepairStreamIDMap;
- (void)generateAudioOnlyBitrateToStreamIDsTable;
- (void)generateVideoOnlyBitrateToStreamIDsTable;
- (void)generateAudioVideoBitrateToStreamIDsTable;
- (id)newBitrateToStreamIDsTableWithAudioTable:(id)a0 videoTable:(id)a1;
- (id)newAggregateTableWithAudioTable:(id)a0 videoTable:(id)a1 isVideoEnabled:(BOOL)a2 isRedundancyEnabled:(BOOL)a3 redundancyEnabledFor720Stream:(BOOL)a4;
- (BOOL)getAudioActiveFromAudioTable:(id)a0;
- (BOOL)shouldAddBackupEntry:(id)a0 videoEnabled:(BOOL)a1 audioEnabled:(BOOL)a2 availableStreamArray:(id)a3;
- (void)checkAndRemoveBackupEntries:(id)a0 redundancyEnabled:(BOOL)a1 currentNetworkBitrate:(unsigned int *)a2;
- (void)appendEntry:(id)a0 entries:(id)a1 currentNetworkBitrate:(unsigned int *)a2 isRedundancyEnabled:(BOOL)a3 isRedundancyEnabledFor720Stream:(BOOL)a4;
- (void)printTable:(id)a0;
- (unsigned int)getTotalBitrateForEntries:(id)a0 repairStreamEnabled:(BOOL)a1;

@end
