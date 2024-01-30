@class NSString, HKProxyProvider;

@interface HKNanoSyncControl : NSObject <_HKXPCExportable, HKNanoSyncControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void)forceNanoSyncWithPullRequest:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)forceNanoSyncWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)resetNanoSyncWithCompletion:(id /* block */)a0;
- (void)fetchNanoSyncPairedDevicesWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;
- (void)forceLastChanceNanoSyncWithCompletion:(id /* block */)a0;

@end
