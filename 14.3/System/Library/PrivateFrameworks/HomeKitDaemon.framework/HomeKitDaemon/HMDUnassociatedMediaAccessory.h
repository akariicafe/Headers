@class NSString, HMDAccessoryAdvertisement;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging>

@property (retain) HMDAccessoryAdvertisement *advertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)modelForChangeType:(unsigned long long)a0 uuid:(id)a1 parentUUID:(id)a2;

- (long long)associationOptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (unsigned long long)transportTypes;
- (id)addTransactionForHome:(id)a0 configurationAppIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)dumpDescription;
- (id)initWithAdvertisement:(id)a0 messageDispatcher:(id)a1;
- (void)updateAdvertisementData:(id)a0;
- (BOOL)isHAPAirPlay2Accessory;

@end
