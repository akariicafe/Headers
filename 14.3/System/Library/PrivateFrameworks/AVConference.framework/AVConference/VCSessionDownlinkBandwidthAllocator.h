@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCSessionDownlinkBandwidthAllocator : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_clients;
    NSMutableDictionary *_selectedMediaEntriesForClients;
    NSMutableDictionary *_allocatedMediaEntriesForClients;
    NSMutableArray *_sortedMediaEntries;
    struct opaqueRTCReporting { } *_reportingAgent;
    unsigned int _maxConcurrentVideoClients;
}

@property (readonly, nonatomic) unsigned long long simultaneousTalkers;

- (void)reset;
- (void)dealloc;
- (id)initWithReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)actualNetworkBitrateVideoDidChangeForClient:(id)a0;
- (void)actualNetworkBitrateAudioDidChangeForClient:(id)a0;
- (id)distributeBitrate:(unsigned int)a0;
- (void)registerForBandwidthAllocationWithClient:(id)a0;
- (void)deregisterForBandwidthAllocationWithClient:(id)a0;
- (unsigned int)requiredAudioBitrate:(unsigned int)a0 highestAudioBitrates:(id)a1;
- (void)sortMediaEntries;
- (void)updateHighestAudioBitrates:(id)a0 bitrate:(unsigned int)a1;
- (void)updateSelectedMediaEntriesForClientWithUUID:(id)a0;
- (void)reportingSessionParticipantEventBitrateChanged:(id)a0 optedInNetworkBitrate:(unsigned int)a1 actualNetworkBitrate:(unsigned int)a2 optedInStreamID:(unsigned short)a3 actualStreamID:(unsigned short)a4;

@end
