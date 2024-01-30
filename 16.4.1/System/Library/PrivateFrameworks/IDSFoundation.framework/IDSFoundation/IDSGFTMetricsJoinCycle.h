@interface IDSGFTMetricsJoinCycle : IDSGFTMetricsReferencePoint {
    double _remoteActiveTime;
}

- (void)receivedAllocateResponseAtTime:(double)a0;
- (void)decryptedBlobOverQUIC:(id)a0;
- (id)initWithFromType:(id)a0 fromUniqueID:(id)a1 anonymizer:(id)a2 template:(id)a3;
- (void)localDidJoin;
- (void)localDidJoinAtTime:(double)a0;
- (void)receivedKMOverPush;
- (void)receivedKMOverPushViaCache;
- (void)receivedKMOverPushViaCacheAtTime:(double)a0;
- (void)receivedKMOverQR;
- (void)receivedKMOverQUIC;
- (void)receivedPreKeyOverPush;
- (void)receivedPreKeyOverQUIC;
- (void)receivedUnverifiedKMOverQUIC;
- (double)referenceTimeForTimeBase:(double)a0;
- (void)remoteDidBecomeActive;
- (void)remoteDidJoin;
- (void)requestedKM;

@end
