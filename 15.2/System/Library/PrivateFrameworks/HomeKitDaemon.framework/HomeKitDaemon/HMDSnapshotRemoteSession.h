@interface HMDSnapshotRemoteSession : HMDSnapshotSession

- (id)description;
- (id)initWithSessionID:(id)a0 accessory:(id)a1 snapshotGetter:(id)a2 message:(id)a3 waitPeriod:(double)a4 streamingTierType:(unsigned long long)a5 cameraLocallyReachable:(BOOL)a6;

@end
