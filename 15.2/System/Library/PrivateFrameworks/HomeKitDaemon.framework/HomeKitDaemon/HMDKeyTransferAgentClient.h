@class HMFNetServiceBrowser, NSMutableDictionary, NSString, NSMutableSet, HMFExponentialBackoffTimer, HMFNetMonitor;

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetServiceDelegate, HMFTimerDelegate, HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate>

@property (retain, nonatomic) HMFNetServiceBrowser *serviceBrowser;
@property (retain, nonatomic) NSMutableDictionary *idsKeys;
@property (retain, nonatomic) NSMutableDictionary *bonjourKeys;
@property (retain, nonatomic) NSMutableSet *targetsToProcess;
@property (nonatomic) BOOL resolutionInProgress;
@property (retain, nonatomic) NSString *pairingWithUUID;
@property (retain, nonatomic) HMFExponentialBackoffTimer *atHomeRetryTimer;
@property (nonatomic) unsigned long long residentProvisioningStatus;
@property (retain, nonatomic) HMFNetMonitor *netMonitor;
@property (nonatomic) BOOL haveCulledPlist;
@property (nonatomic) long long tfaState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)_stopBrowser;
- (void).cxx_destruct;
- (void)_startBrowser;
- (void)networkMonitorIsReachable:(id)a0;
- (void)dealloc;
- (void)_handleResidentProvisioningStatusChanged:(id)a0;
- (void)netServiceBrowser:(id)a0 didAddService:(id)a1;
- (void)netServiceBrowser:(id)a0 didStopBrowsingWithError:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecord:(id)a1;
- (void)_saveKeyPlist;
- (id)_deviceWithUUID:(id)a0;
- (void)queryPlistDevices;
- (void)resetConfig;
- (void)_reallyBeginBonjourResolution;
- (void)_beginBonjourResolution:(BOOL)a0;
- (void)_endPairingWithError:(id)a0 suspendingTimer:(BOOL)a1;
- (void)_startPairingWithKeyUUID:(id)a0 forTarget:(id)a1;
- (void)_tfaVerificationCompleteForKeyUUID:(id)a0 forTarget:(id)a1;
- (void)_tryPairingWithAccessories:(id)a0 completionHandler:(id /* block */)a1;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)a0 forTarget:(id)a1;
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)a0 forDevice:(id)a1;
- (void)_sendIOSPublicKey:(id)a0 withDevice:(id)a1;
- (void)_sendATVPrivateKey:(id)a0 withDevice:(id)a1 retry:(unsigned long long)a2;
- (BOOL)_newDeviceSeen:(id)a0;
- (void)_device:(id)a0 addedToAccount:(id)a1;
- (void)__deviceAddedToAccount:(id)a0;
- (void)__deviceUpdated:(id)a0;
- (void)_device:(id)a0 removedFromAccount:(id)a1;
- (void)__deviceRemovedFromAccount:(id)a0;
- (void)__accessoryIsReachable:(id)a0;
- (void)__accountChanged:(id)a0;
- (void)_restartKeyTransfer:(id)a0;
- (void)_handleKeyTransferAgentMessage:(id)a0;
- (void)receivedBonjourTXTFrom:(id)a0 withUUIDData:(id)a1;

@end
