@class NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SFClient : NSObject {
    NSMutableSet *_assertions;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)broadwayPresentCardWithCode:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_ensureXPCStarted;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void)getDeviceAssets:(id)a0 completion:(id /* block */)a1;
- (void)showDevicePickerWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)activateAssertionWithIdentifier:(id)a0;
- (id)init;
- (void)setAudioRoutingScore:(int)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)displayNameForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)appleIDInfoWithCompletion:(id /* block */)a0;
- (void)startProxCardTransactionWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)retriggerProximitySetup:(id /* block */)a0;
- (void)contactIDForEmailHash:(id)a0 phoneHash:(id)a1 completion:(id /* block */)a2;
- (void)findContact:(id)a0 completion:(id /* block */)a1;
- (void)_invalidated;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)a0;
- (void)retriggerProximityPairing:(id /* block */)a0;
- (void)triggerProximityAutoFillDetectedWithURL:(id)a0 completion:(id /* block */)a1;
- (void)clearXPCHelperImageCacheWithCompletion:(id /* block */)a0;
- (void)subCredentialPresentCardWithParams:(id)a0 completion:(id /* block */)a1;
- (void)_invalidate;
- (void)openSetupURL:(id)a0 completion:(id /* block */)a1;
- (void)displayStringForContactIdentifier:(id)a0 deviceIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)getPeopleSuggestions:(id)a0 completion:(id /* block */)a1;
- (void)setupDevice:(id)a0 home:(id)a1 completion:(id /* block */)a2;
- (void)reenableProxCardType:(unsigned char)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)preventExitForLocaleReason:(id)a0;
- (void)testContinuityKeyboardBegin:(BOOL)a0;
- (void)invalidate;
- (void)repairDevice:(id)a0 completion:(id /* block */)a1;
- (void)repairDevice:(id)a0 flags:(unsigned int)a1 completion:(id /* block */)a2;
- (void)activityStateWithCompletion:(id /* block */)a0;

@end
