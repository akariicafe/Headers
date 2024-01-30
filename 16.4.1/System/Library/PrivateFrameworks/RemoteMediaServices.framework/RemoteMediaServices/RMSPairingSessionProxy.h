@class NSString, RMSIDSClient;
@protocol RMSPairingSessionDelegate;

@interface RMSPairingSessionProxy : RMSSessionProxy <RMSPairingSession> {
    RMSIDSClient *_idsClient;
    BOOL _pairing;
}

@property (weak, nonatomic) id<RMSPairingSessionDelegate> delegate;
@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) NSString *advertisedAppName;
@property (retain, nonatomic) NSString *advertisedDeviceName;
@property (retain, nonatomic) NSString *advertisedDeviceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)endPairing;
- (void)_handleDidPairWithServiceNotification:(id)a0;
- (void)_handlePairingDidFailNotification:(id)a0;
- (void)_handleSessionDidEndNotification:(id)a0;
- (void)_notifyDelegatePairingFailed;
- (void)beginPairing;
- (void)heartbeatDidFail;
- (void)unpairService:(id)a0 completionHandler:(id /* block */)a1;

@end
