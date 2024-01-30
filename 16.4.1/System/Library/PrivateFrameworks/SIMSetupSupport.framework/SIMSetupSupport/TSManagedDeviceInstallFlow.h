@class NSString, NSError, NSTimer;

@interface TSManagedDeviceInstallFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate> {
    BOOL _waitForService;
    BOOL _fallbackToActivationCode;
    BOOL _ignoreTransport;
    BOOL _startMonitoringConnection;
    NSError *_planInstallError;
    NSTimer *_provisioningWatchDogTimer;
    id /* block */ _firstViewCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)a0;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (void)handleProvisioningWatchdogExpiry;
- (void)hasCellularConnection:(id /* block */)a0;
- (id)initWith:(BOOL)a0 fallbackToActivationCode:(BOOL)a1 ignoreTransport:(BOOL)a2;
- (void)invokeCompletionWithPlanInstallResult:(unsigned long long)a0;

@end
