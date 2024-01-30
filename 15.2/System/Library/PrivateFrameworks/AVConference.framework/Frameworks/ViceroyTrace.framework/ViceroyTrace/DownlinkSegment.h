@class NSMutableDictionary;

@interface DownlinkSegment : MultiwaySegment

@property (readonly) NSMutableDictionary *downlinkParticipantStats;
@property unsigned long long totalCellRxDataBytes;
@property unsigned long long totalCellDupRxDataBytes;

- (void)dealloc;
- (id)segmentReport;
- (id)initWithSegmentName:(id)a0 previousSegmentName:(id)a1 segmentStreamGroups:(unsigned int)a2 previousSegmentStreamGroups:(unsigned int)a3 nwActivity:(id)a4 localSwitches:(unsigned int)a5 conversationTimeBase:(id)a6 delegate:(id)a7;
- (void)addCellByteCountStats:(id)a0;
- (void)processVideoDegraded:(BOOL)a0 forParticipant:(id)a1 streamGroup:(id)a2;
- (id)callStatsForParticipant:(id)a0;
- (void)updateMinimumAndMaximumAVSyncOffset:(id)a0 streamGroupStats:(id)a1;
- (void)processVideoStreamData:(id)a0 streamGroupStats:(id)a1;
- (void)processAudioStreamData:(id)a0 streamGroupStats:(id)a1;
- (void)finalizeVideoStreamGroupStats:(id)a0;
- (void)accumulateVideoPerStreamGroupStats:(id)a0 streamGroupStats:(id)a1;
- (void)accumulateAudioPerStreamGroupStats:(id)a0 streamGroupStats:(id)a1;
- (void)reportVideoPerStreamGroupStats:(id)a0 streamGroup:(id)a1 accumulatedStreamGroupStats:(id)a2;
- (void)reportAudioPerStreamGroupStats:(id)a0 streamGroup:(id)a1 accumulatedStreamGroupStats:(id)a2;
- (void)addPerStreamGroupStats:(id)a0;
- (void)resetVideoDegradedForAllParticipants;
- (void)processStreamData:(id)a0 forParticipant:(id)a1 streamGroup:(id)a2;

@end
