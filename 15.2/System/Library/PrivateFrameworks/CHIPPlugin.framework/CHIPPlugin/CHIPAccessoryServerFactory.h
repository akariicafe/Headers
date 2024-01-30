@class CHIPAccessoryServerBrowser;
@protocol HAPKeyStore;

@interface CHIPAccessoryServerFactory : HMFObject

@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser;
@property (weak, nonatomic) id<HAPKeyStore> keystore;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithKeystore:(id)a0 browser:(id)a1;
- (id)_createInfoService:(id)a0 model:(id)a1 manufacturer:(id)a2 serialNumber:(id)a3;
- (id)createHAPServiceCommon:(id)a0 characteristics:(id)a1 serviceInstanceID:(long long)a2;
- (id)vendAccessoryServerWithNodeID:(id)a0 setupCode:(id)a1 discriminator:(id)a2 identifier:(id)a3 category:(id)a4 name:(id)a5 vendorID:(id)a6 productID:(id)a7 serialNumber:(id)a8;
- (id)createOnServiceType:(id)a0;
- (id)createLightServiceType:(id)a0;
- (id)createLockMechanismServiceType:(id)a0;
- (id)createTemperatureSensorServiceType:(id)a0;

@end
