@class NSString, NSMutableArray, NSDate;

@interface WiFiUsageRangingSession : NSObject {
    NSDate *_sessionStartTimestamp;
    NSDate *_sessionLinkUpTimestamp;
    NSDate *_peerDiscoveryTimestamp;
    NSDate *_rangingStartedTimestamp;
    NSDate *_rangingCompletionTimestamp;
    unsigned long long _selfPreferredChannel;
    unsigned long long _selfMainChannel;
    unsigned long long _selfChannelFlags;
    unsigned long long _peerPreferredChannel;
    unsigned long long _peerMainChannel;
    unsigned long long _peerChannelFlags;
    unsigned long long _numRequestedMeasurements;
    unsigned long long _numValidMeasurements;
    long long _measurementStatus;
    unsigned long long _measurementFlags;
    double _linkUpLatency;
    double _rangingLatency;
    NSMutableArray *_rttSamples;
    NSString *_requester;
}

- (id)sessionSummary:(BOOL)a0;
- (id)metricName;
- (void)addRangingRttSampleWithRssi:(long long)a0 rtt:(long long)a1 snr:(unsigned long long)a2 flags:(unsigned long long)a3 channel:(unsigned long long)a4 coreId:(unsigned long long)a5 bitErrorRate:(unsigned long long)a6 phyError:(unsigned long long)a7 andPeerSnr:(unsigned long long)a8 andPeerCoreId:(unsigned long long)a9 andPeerBitErrorRate:(unsigned long long)a10 andPeerPhyError:(unsigned long long)a11;
- (void)rangingStartedWithNumMeasurements:(unsigned long long)a0;
- (void)rangingSessionRequestedWithSelfPreferredChannel:(unsigned long long)a0 selfMainChannel:(unsigned long long)a1 selfChannelFlags:(unsigned long long)a2 peerPreferredChannel:(unsigned long long)a3 peerMainChannel:(unsigned long long)a4 peerChannelFlags:(unsigned long long)a5 requester:(id)a6;
- (void).cxx_destruct;
- (id)init;
- (void)rangingCompletedWithValidCount:(unsigned long long)a0 resultStatus:(long long)a1 resultFlags:(unsigned long long)a2;
- (void)rangingLinkUp;

@end
