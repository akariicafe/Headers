@class NSString, NSData, HMFVersion;

@interface HAP2AccessoryServerDiscoveryHAPAccessoryInfo : HAP2AccessoryServerDiscoveryAccessoryInfo

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) unsigned char status;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long configurationNumber;
@property (readonly, nonatomic) unsigned long long stateNumber;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) unsigned long long featureFlags;
@property (readonly, nonatomic) NSData *setupHash;

- (void).cxx_destruct;
- (id)initWithDeviceID:(id)a0 rawDiscoveryInfo:(id)a1;
- (id)initWithDeviceID:(id)a0 rawDiscoveryInfo:(id)a1 name:(id)a2 model:(id)a3 status:(unsigned char)a4 category:(unsigned long long)a5 configurationNumber:(unsigned long long)a6 stateNumber:(unsigned long long)a7 protocolVersion:(id)a8 featureFlags:(unsigned long long)a9 setupHash:(id)a10;

@end
