@class HMMTRAccessoryServerBrowser;
@protocol HAPKeyStore;

@interface HMMTRAccessoryServerFactory : HMFObject

@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (weak, nonatomic) id<HAPKeyStore> keystore;

+ (id)logCategory;
+ (id)createHMMTRHAPServiceCommon:(id)a0 characteristics:(id)a1 serviceLabelIndex:(id)a2 serviceInstanceID:(id)a3 endpointID:(id)a4 nodeID:(id)a5 topology:(id)a6 clusterIDCharacteristicMap:(id)a7 linkedServices:(id)a8;
+ (id)createHMMTRHAPServiceLabelServiceWithEndpointID:(id)a0 nodeID:(id)a1;
+ (id)createInfoService:(id)a0 model:(id)a1 manufacturer:(id)a2 serialNumber:(id)a3 instanceID:(long long)a4 endpointID:(id)a5;
+ (id)createInfoService:(id)a0 model:(id)a1 manufacturer:(id)a2 serialNumber:(id)a3 instanceID:(unsigned long long)a4 endpointID:(id)a5 nodeID:(id)a6 legacyInstanceIDAssignment:(BOOL)a7;
+ (id)instanceIDForCharacteristicType:(id)a0 serviceType:(id)a1 endpointID:(id)a2 nodeID:(id)a3;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithKeystore:(id)a0 browser:(id)a1;
- (id)vendAccessoryServerWithNodeID:(id)a0 setupCode:(id)a1 discriminator:(id)a2 category:(id)a3 vendorID:(id)a4 productID:(id)a5 serialNumber:(id)a6 firmwareRevision:(id)a7;

@end
