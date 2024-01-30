@class NSString, NSArray, HAPAccessoryServerBrowserBTLE, CBPeripheral, NSNumber, HAPBLEPeripheral;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer <HAPAccessoryServerMetricProtocol>

@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long metricHAPBTLEConnectionCount;
@property (nonatomic) unsigned long long metricHAPBTLEDiscoveryCount;
@property (nonatomic) unsigned long long metricHAPBTLEConnectionPerReasonCount;
@property (readonly, weak, nonatomic) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic) unsigned char connectionIdleTime;
@property (weak, nonatomic) HAPBLEPeripheral *blePeripheral;
@property (copy, nonatomic) NSNumber *stateNumber;
@property (nonatomic) BOOL stateChanged;
@property (nonatomic) unsigned char connectReason;
@property (nonatomic) BOOL notifyingCharacteristicUpdated;
@property (readonly, weak, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) unsigned long long hapBLEProtocolVersion;
@property (readonly, nonatomic) unsigned long long resumeSessionID;
@property (readonly, nonatomic) NSString *whbStableIdentifier;

+ (id)hapUUIDFromBTLEUUID:(id)a0;

- (BOOL)isPaired;
- (long long)linkType;
- (void).cxx_destruct;
- (BOOL)isCached;
- (void)configureCharacteristics:(id)a0 queue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)discoverAccessoriesAndReadCharacteristicTypes:(id)a0;
- (void)generateBroadcastKey:(unsigned char)a0 queue:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleConnectionWithPeripheral:(id)a0 withError:(id)a1;
- (void)handleDisconnectionWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)incrementHAPBTLEMetricsConnectionCount;
- (void)incrementHAPBTLEMetricsDiscoveryCount;
- (id)initWithPeripheral:(id)a0 name:(id)a1 pairingUsername:(id)a2 statusFlags:(id)a3 stateNumber:(id)a4 stateChanged:(BOOL)a5 connectReason:(unsigned char)a6 configNumber:(id)a7 category:(id)a8 setupHash:(id)a9 connectionIdleTime:(unsigned char)a10 browser:(id)a11 keyStore:(id)a12 whbStableIdentifier:(id)a13;
- (BOOL)isReadyForOperation:(long long)a0;
- (id)readAndResetHAPMetrics:(BOOL)a0;
- (void)updateConnectionIdleTime:(unsigned char)a0;
- (void)updatePeripheral:(id)a0;
- (BOOL)updatePeripheralIdentifier:(id *)a0 isPairing:(BOOL)a1;
- (BOOL)updateResumeSessionID:(unsigned long long)a0;

@end
