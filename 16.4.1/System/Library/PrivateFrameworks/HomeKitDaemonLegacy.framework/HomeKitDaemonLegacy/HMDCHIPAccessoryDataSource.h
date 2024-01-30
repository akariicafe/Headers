@class NSSet, NSString, NSData, NSNumber, HMDHAPAccessory;

@interface HMDCHIPAccessoryDataSource : HMFObject <HMMTRDeviceStorageDataSource>

@property (weak) HMDHAPAccessory *accessory;
@property (readonly, copy, nonatomic) NSNumber *nodeID;
@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;
@property (readonly, copy, nonatomic) NSData *attributeDatabase;
@property (readonly, copy, nonatomic) NSSet *pairings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_updateAccessoryModelWithLabel:(id)a0 completion:(id /* block */)a1 block:(id /* block */)a2;
- (id)initWithNodeID:(id)a0 accessory:(id)a1;
- (void)updateAttributeDatabase:(id)a0 completion:(id /* block */)a1;
- (void)updateNodeID:(id)a0 completion:(id /* block */)a1;
- (void)updatePairings:(id)a0 completion:(id /* block */)a1;
- (void)updateProductID:(id)a0 completion:(id /* block */)a1;
- (void)updateVendorID:(id)a0 completion:(id /* block */)a1;
- (void)updateVendorID:(id)a0 productID:(id)a1 completion:(id /* block */)a2;

@end
