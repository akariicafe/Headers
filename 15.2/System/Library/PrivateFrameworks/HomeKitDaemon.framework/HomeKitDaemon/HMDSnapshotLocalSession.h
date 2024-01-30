@interface HMDSnapshotLocalSession : HMDSnapshotSession

- (id)description;
- (void)addMessage:(id)a0;
- (id)initWithSessionID:(id)a0 accessory:(id)a1 snapshotGetter:(id)a2 message:(id)a3 waitPeriod:(double)a4 reachabilityPath:(unsigned long long)a5 cameraLocallyReachable:(BOOL)a6 snapshotForNotification:(BOOL)a7;

@end
