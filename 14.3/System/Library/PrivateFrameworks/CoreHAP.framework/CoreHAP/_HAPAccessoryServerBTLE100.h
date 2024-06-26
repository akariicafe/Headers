@class CBCharacteristic, CBService, NSMapTable, NSString, NSObject, NSMutableArray, HAPSecuritySession;
@protocol OS_dispatch_source;

@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE <HAPSecuritySessionDelegate, CBPeripheralDelegate> {
    struct PairingSessionPrivate { } *_pairingSession;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long connectionRetryCount;
@property (retain, nonatomic) NSMapTable *btleServiceToHAPServiceMap;
@property (nonatomic) unsigned long long characteristicDiscoveryRequestCount;
@property (nonatomic) unsigned long long characteristicValueReadCount;
@property (nonatomic) unsigned long long metadataDiscoveryRequestCount;
@property (nonatomic) unsigned long long metadataValueReadCount;
@property (nonatomic) unsigned long long availableInstanceID;
@property (retain, nonatomic) NSMapTable *btleCharacteristicToHAPCharacteristicMap;
@property (retain, nonatomic) NSMapTable *hapCharacteristicReadCompletionQueues;
@property (retain, nonatomic) NSMapTable *hapCharacteristicWriteCompletionQueues;
@property (retain, nonatomic) NSMapTable *hapCharacteristicEnableEventCompletionQueues;
@property (retain, nonatomic) NSMutableArray *addRemovePairingOperationsQueue;
@property (retain, nonatomic) CBService *pairingService;
@property (retain, nonatomic) CBCharacteristic *pairSetupCharacteristic;
@property (retain, nonatomic) CBCharacteristic *pairVerifyCharacteristic;
@property (retain, nonatomic) CBCharacteristic *pairingFeaturesCharacteristic;
@property (retain, nonatomic) CBCharacteristic *pairingsCharacteristic;
@property (retain, nonatomic) CBService *accessoryInfoService;
@property (retain, nonatomic) CBCharacteristic *identifyCharacteristic;
@property (retain, nonatomic) CBCharacteristic *modelCharacteristic;
@property (retain, nonatomic) CBCharacteristic *serialNumberCharacteristic;
@property (retain, nonatomic) CBCharacteristic *manufacturerCharacteristic;
@property (retain, nonatomic) NSString *controllerUsername;
@property (copy, nonatomic) id /* block */ pairVerifyCompletionBlock;
@property (nonatomic) BOOL startPairingRequested;
@property (nonatomic) BOOL pairingFeaturesRead;
@property (nonatomic) unsigned long long pairingFeatureFlags;
@property (retain, nonatomic) HAPSecuritySession *securitySession;
@property (nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectionLifetimeTimer;
@property (nonatomic) double idleConnectionTimeoutInSec;
@property (nonatomic, getter=isDisconnecting) BOOL disconnecting;
@property (nonatomic) BOOL unpairedIdentifyRequested;
@property (copy, nonatomic) id /* block */ unpairedIdentifyCompletionBlock;
@property (nonatomic) BOOL removeOnDisconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializeCharacteristicWriteValue:(id)a0 characteristicFormat:(unsigned long long)a1 supportsAdditonalAuthentication:(BOOL)a2 authenticationData:(id)a3 error:(id *)a4;
+ (id)deserializeCharacteristicReadData:(id)a0 characteristicFormat:(unsigned long long)a1 supportsAdditonalAuthentication:(BOOL)a2 error:(id *)a3;
+ (id)_convertFromBTLEToHAPUUID:(id)a0;

- (void)_resetState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)peripheral:(id)a0 didModifyServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverDescriptorsForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForDescriptor:(id)a1 error:(id)a2;
- (void)listPairingsWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isBLELinkConnected;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)enableEvents:(BOOL)a0 forCharacteristics:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (void)configureCharacteristics:(id)a0 queue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)generateBroadcastKey:(unsigned char)a0 queue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)identifyWithCompletion:(id /* block */)a0;
- (void)discoverAccessories;
- (void)startPairingWithConsentRequired:(BOOL)a0 config:(id)a1 ownershipToken:(id)a2;
- (void)continuePairingAfterAuthPrompt;
- (BOOL)stopPairingWithError:(id *)a0;
- (BOOL)tryPairingPassword:(id)a0 error:(id *)a1;
- (void)addPairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)removePairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)continueAuthAfterValidation:(BOOL)a0;
- (void)_getAttributeDatabase;
- (void)_establishSecureSession;
- (int)_pairSetupTryPassword:(id)a0;
- (void)_enableEvents:(BOOL)a0 forCharacteristics:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)a0;
- (void)_removePairingWithIdentifier:(id)a0 publicKey:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)_encryptDataAndGenerateAuthTag:(id)a0 error:(id *)a1;
- (id)_decryptData:(id)a0 error:(id *)a1;
- (id)getLocalPairingIdentityAndAllowCreation:(BOOL)a0 error:(id *)a1;
- (id)securitySession:(id)a0 didReceiveLocalPairingIdentityRequestWithError:(id *)a1;
- (id)securitySession:(id)a0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)a1 error:(id *)a2;
- (void)securitySession:(id)a0 didReceiveSetupExchangeData:(id)a1;
- (void)securitySessionIsOpening:(id)a0;
- (void)securitySessionDidOpen:(id)a0;
- (void)securitySession:(id)a0 didCloseWithError:(id)a1;
- (void)handleDisconnectionWithError:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateConnectionIdleTime:(unsigned char)a0;
- (void)handleConnectionWithPeripheral:(id)a0 withError:(id)a1;
- (id)initWithPeripheral:(id)a0 name:(id)a1 pairingUsername:(id)a2 statusFlags:(id)a3 stateNumber:(id)a4 stateChanged:(BOOL)a5 connectReason:(unsigned char)a6 configNumber:(id)a7 category:(id)a8 setupHash:(id)a9 connectionIdleTime:(unsigned char)a10 browser:(id)a11 keyStore:(id)a12;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (void)_enableEvent:(BOOL)a0 forCharacteristic:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (void)_handleConnectionWithError:(id)a0;
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)a0 error:(id)a1;
- (unsigned long long)hapBLEProtocolVersion;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)a0 forCharacteristic:(id)a1;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)a0 forCharacteristic:(id)a1;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)a0 forCharacteristic:(id)a1;
- (void)_notifyDelegateOfSentPlaintextData:(id)a0 forCharacteristic:(id)a1;
- (void)_handlePairingStateMachine;
- (void)_updateConnectionLifetimeTimer;
- (void)_setupBTLEConnectionToPeripheral;
- (void)_cancelConnectionLifetimeTimer;
- (void)_checkForAuthPrompt;
- (int)_pairSetupStart;
- (void)_reallyEstablishSecureSession;
- (void)_handleHAPServiceDiscovery;
- (void)_handleDescriptorDiscovery;
- (void)_handleReadDescriptorValues;
- (void)_readCharacteristicValues:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)_btleCharacteristicForHAPCharacteristic:(id)a0;
- (void)_enqueueEnableEventCompletionHandler:(id /* block */)a0 queue:(id)a1 forCharacteristic:(id)a2;
- (id)_hapCharacteristicForBTLECharacteristic:(id)a0;
- (id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)a0;
- (void)_handleSuccessfulBTLEConnection;
- (void)_handleDisconnectionWithQueue:(id)a0 withCompletion:(id /* block */)a1;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)a0;
- (id /* block */)_dequeueWriteCompletionHandlerForCharacteristic:(id)a0;
- (void)_writeCharacteristicValues:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_writeValue:(id)a0 forCharacteristic:(id)a1 authorizationData:(id)a2 withCompletionHandler:(id /* block */)a3 queue:(id)a4;
- (BOOL)_shouldEnableSessionSecurity;
- (void)_enqueueWriteCompletionHandler:(id /* block */)a0 forCharacteristic:(id)a1;
- (void)_readValueForCharacteristic:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)_enqueueReadCompletionHandler:(id /* block */)a0 queue:(id)a1 forCharacteristic:(id)a2;
- (void)readValueForCharacteristic:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (id)_pairVerifyHAPCharacteristic;
- (id)_parseBTLEService:(id)a0 withInstanceId:(id)a1;
- (id)_nextInstanceID;
- (void)_handleConnectionLifetimeTimeout;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)a0 error:(id)a1;
- (BOOL)_parseBTLECharacteristicDescriptor:(id)a0 existingDescriptors:(id)a1 characteristics:(id)a2;
- (id)_pairSetupHAPCharacteristic;
- (int)_handlePairSetupExchangeWithData:(id)a0;
- (void)_handleReceivedSecuritySessionSetupExchangeData:(id)a0;
- (void)_handleHAPServiceDiscoveryCompletionForService:(id)a0 withInstanceId:(id)a1;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)a0 error:(id)a1;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)a0 error:(id)a1;
- (void)_addPairingWithIdentifier:(id)a0 publicKey:(id)a1 admin:(BOOL)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_enqueueOperation:(long long)a0 identifier:(id)a1 publicKey:(id)a2 admin:(BOOL)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)_dequeueAndContinueOperation;
- (void)_handlePairingsWriteForCharacteristic:(id)a0 writeError:(id)a1 removing:(BOOL)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)_handlePairingsReadForCharacteristic:(id)a0 readError:(id)a1 removing:(BOOL)a2 queue:(id)a3 completion:(id /* block */)a4;

@end
