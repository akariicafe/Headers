@class NSString, TVRMSIDSClient;
@protocol TVRMSPairingSessionDelegate;

@interface TVRMSPairingSessionProxy : TVRMSSessionProxy <TVRMSPairingSession> {
    TVRMSIDSClient *_idsClient;
    BOOL _pairing;
}

@property (weak, nonatomic) id<TVRMSPairingSessionDelegate> delegate;
@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) NSString *advertisedAppName;
@property (retain, nonatomic) NSString *advertisedDeviceName;
@property (retain, nonatomic) NSString *advertisedDeviceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endPairing;
- (void)beginPairing;
- (void)_handleSessionDidEndNotification:(id)a0;
- (void)heartbeatDidFail;
- (void)_handleDidPairWithServiceNotification:(id)a0;
- (void)_handlePairingDidFailNotification:(id)a0;
- (void)_notifyDelegatePairingFailed;

@end
