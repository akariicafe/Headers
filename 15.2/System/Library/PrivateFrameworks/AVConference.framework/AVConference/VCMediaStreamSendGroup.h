@class VCSessionUplinkBandwidthAllocator, NSMutableArray;

@interface VCMediaStreamSendGroup : VCMediaStreamGroup {
    BOOL _isRedundancyEnabled;
    BOOL _areStreamsSuspended;
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    NSMutableArray *_peerSubscribedStreams;
    BOOL _isRemoteOnPeace;
    BOOL _shouldSynchronizeWithSourceRTPTimestamps;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _sourceTimestampRWLock;
    unsigned int _lastSentSourceSampleTime;
    double _lastSentSourceHostTime;
    BOOL _isSourceTimestampInfoAvailable;
    double _sourceSampleRate;
}

@property (nonatomic) unsigned int currentUplinkTargetBitrate;
@property (nonatomic) unsigned int currentUplinkTotalBitrate;
@property (nonatomic) unsigned int uplinkBitrateCapWifi;
@property (nonatomic) unsigned int uplinkBitrateCapCell;

- (void)didStop;
- (void)dealloc;
- (void)didStart;
- (id)initWithConfig:(id)a0;
- (void)updateActiveMediaStreamIDs:(id)a0 withTargetBitrate:(unsigned int)a1 mediaBitrates:(id)a2;
- (void)setPeerSubscribedStreams:(id)a0;
- (id)activeStreamKeys;
- (BOOL)enableRedundancy:(BOOL)a0;
- (void)setActiveConnection:(id)a0 uplinkBitrateCap:(unsigned int)a1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)a0;
- (void)didPause:(BOOL)a0;
- (BOOL)shouldCompoundListIgnoreStream:(id)a0 streamConfig:(id)a1 activeStreamIds:(id)a2;
- (BOOL)shouldSubscribeToStreamID:(id)a0 peerSubscribedStreams:(id)a1;
- (void)isStreamActive:(BOOL *)a0 isDesiredActive:(BOOL *)a1 peerSubscribedStreams:(id)a2 configStreams:(id)a3;
- (id)streamDescriptionForMultiwayConfig:(id)a0;
- (void)updateActiveStreamsCount:(unsigned int)a0;
- (void)updateActiveStreamsWithTargetBitrate:(unsigned int)a0;
- (BOOL)updateUplinkStreamsForPeerSubscribedStreams:(id)a0;
- (void)updateBandwidthAllocatorStreamTokenState;
- (void)updateStreamIDCompoundingWithBlock:(id /* block */)a0 activeStreamIds:(id)a1;

@end
