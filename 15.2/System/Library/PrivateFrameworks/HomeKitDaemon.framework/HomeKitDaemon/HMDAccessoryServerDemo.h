@class NSDictionary, NSNumber, HMDAccessoryServerBrowserDemo;

@interface HMDAccessoryServerDemo : HAPAccessoryServer {
    NSNumber *_category;
}

@property (weak, nonatomic) HMDAccessoryServerBrowserDemo *browser;
@property (nonatomic) BOOL _paired;
@property (nonatomic) BOOL _hasPairings;
@property (retain, nonatomic) NSDictionary *accessoryInfo;
@property (readonly) BOOL testMode;

- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)enableEvents:(BOOL)a0 forCharacteristics:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)a0 completion:(id /* block */)a1;
- (BOOL)isPaired;
- (id)category;
- (long long)linkType;
- (void)continuePairingAfterAuthPrompt;
- (void)setCategory:(id)a0;
- (void)startPairingWithConsentRequired:(BOOL)a0 config:(id)a1 ownershipToken:(id)a2;
- (id)initCommon:(id)a0 browser:(id)a1;
- (BOOL)tryPairingPassword:(id)a0 error:(id *)a1;
- (void)addPairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)handleUpdatesForCharacteristics:(id)a0 stateNumber:(id)a1;
- (void)identifyWithCompletion:(id /* block */)a0;
- (BOOL)stopPairingWithError:(id *)a0;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)listPairingsWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)discoverAccessories;
- (id)initWithName:(id)a0 identifier:(id)a1 deviceInfo:(id)a2 paired:(BOOL)a3 keyStore:(id)a4 testMode:(BOOL)a5 browser:(id)a6;
- (BOOL)hasPairings;
- (void)_parseAttributeDatabase:(id)a0;
- (void)sendDelayedResponse:(unsigned long long)a0 responses:(id)a1 readOperation:(BOOL)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)processCharacteristicWrite:(id)a0 value:(id)a1;

@end
