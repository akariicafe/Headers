@class HAPCharacteristic, NSString, HAPRelayActivationClient, HAPRelayPairingClient;

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate>

@property (retain, nonatomic) HAPCharacteristic *relayControlPointCharacteristic;
@property (retain, nonatomic) HAPCharacteristic *relayEnabledCharacteristic;
@property (retain, nonatomic) NSString *relayAccessoryIdentifier;
@property (nonatomic, getter=isRelayEnabled) BOOL relayEnabled;
@property (readonly, nonatomic) unsigned long long relayState;
@property (readonly, nonatomic) HAPRelayActivationClient *relayActivationClient;
@property (readonly, nonatomic) HAPRelayPairingClient *relayPairingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredRelayServiceCharacteristics;

- (BOOL)supportsRelay;
- (void).cxx_destruct;
- (void)relayActivationClient:(id)a0 didCloseWithError:(id)a1;
- (void)relayActivationClient:(id)a0 didReceiveChallenge:(id)a1;
- (void)relayActivationClient:(id)a0 didReceiveRelayCertificate:(id)a1;
- (void)_setRelayEnabled:(BOOL)a0;
- (void)startRelayActivationWithActivationClient:(id)a0;
- (void)startRelayPairingWithPairingClient:(id)a0;
- (void)addRelayPairingWithIdentifier:(id)a0 accessToken:(id)a1 admin:(BOOL)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeRelayPairingWithIdentifier:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)relayPairingClient:(id)a0 didCloseWithError:(id)a1;
- (void)relayPairingClient:(id)a0 didReceiveControllerIdentifier:(id)a1;
- (void)relayPairingClient:(id)a0 didReceiveAccessToken:(id)a1 accessoryIdentifier:(id)a2;
- (void)accessoryServer:(id)a0 didUpdateValueForCharacteristic:(id)a1;
- (id)initWithServer:(id)a0 instanceID:(id)a1 parsedServices:(id)a2;
- (BOOL)_parseServices;
- (void)_updateRelayEnabled:(BOOL)a0;
- (unsigned long long)_relayState;
- (id)_relayActivationClient;
- (void)_stopRelayActivationWithError:(id)a0;
- (void)_setRelayActivationClient:(id)a0;
- (void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleRelayActivationChallenge:(id)a0;
- (void)_handleRelayActivationCertificate:(id)a0;
- (id)_relayPairingClient;
- (void)_stopRelayPairingWithError:(id)a0;
- (void)_setRelayPairingClient:(id)a0;
- (void)_handleRelayPairingIdentifierRequest;
- (void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)a0;
- (void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)a0 accessoryIdentifier:(id)a1;
- (BOOL)_parseRelayService:(id)a0;
- (void)_setRelayState:(unsigned long long)a0;

@end
