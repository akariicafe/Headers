@class NSDictionary, NSNumber, HMDDAccessoryServerBrowserDemo;

@interface HMDDAccessoryServerDemo : HAPAccessoryServer {
    NSNumber *_category;
}

@property (weak, nonatomic) HMDDAccessoryServerBrowserDemo *browser;
@property (nonatomic) BOOL _paired;
@property (nonatomic) BOOL _hasPairings;
@property (retain, nonatomic) NSDictionary *accessoryInfo;

- (BOOL)isPaired;
- (long long)linkType;
- (void)setCategory:(id)a0;
- (void).cxx_destruct;
- (id)category;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 deviceInfo:(id)a2 paired:(BOOL)a3 keyStore:(id)a4 browser:(id)a5;
- (void)listPairingsWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)enableEvents:(BOOL)a0 forCharacteristics:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (void)identifyWithCompletion:(id /* block */)a0;
- (id)initCommon:(id)a0 browser:(id)a1;
- (void)_parseAttributeDatabase:(id)a0;
- (void)processCharacteristicWrite:(id)a0 value:(id)a1;
- (BOOL)hasPairings;
- (void)discoverAccessories;
- (void)startPairingWithConsentRequired:(BOOL)a0 config:(id)a1 ownershipToken:(id)a2;
- (void)continuePairingAfterAuthPrompt;
- (BOOL)stopPairingWithError:(id *)a0;
- (BOOL)tryPairingPassword:(id)a0 error:(id *)a1;
- (void)addPairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)removePairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)handleUpdatesForCharacteristics:(id)a0;

@end
