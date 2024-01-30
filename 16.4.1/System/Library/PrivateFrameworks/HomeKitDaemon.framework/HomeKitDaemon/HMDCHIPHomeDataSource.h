@class NSSet, NSDictionary, HMDHome, NSData, NSNumber, NSString;

@interface HMDCHIPHomeDataSource : HMFObject <HMMTRFabricStorageDataSource>

@property (weak) HMDHome *home;
@property (readonly, copy, nonatomic) NSNumber *fabricID;
@property (readonly, copy, nonatomic) NSNumber *fabricIndex;
@property (readonly, copy, nonatomic) NSNumber *lastNodeID;
@property (readonly, copy, nonatomic) NSData *rootCertificate;
@property (readonly, copy, nonatomic) NSData *operationalCertificate;
@property (readonly, copy, nonatomic) NSData *intermediateCertificate;
@property (readonly, copy, nonatomic) NSDictionary *keyValueStore;
@property (readonly, copy, nonatomic) NSSet *allNodeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)updateKeyValueStore:(id)a0 completion:(id /* block */)a1;
- (void)_updateHomeModelWithLabel:(id)a0 completion:(id /* block */)a1 block:(id /* block */)a2;
- (id)initWithFabricID:(id)a0 fabricIndex:(id)a1 home:(id)a2;
- (id)storageDataSourceForDeviceWithNodeID:(id)a0;
- (void)updateFabricID:(id)a0 completion:(id /* block */)a1;
- (void)updateFabricIndex:(id)a0 completion:(id /* block */)a1;
- (void)updateIntermediateCertificate:(id)a0 completion:(id /* block */)a1;
- (void)updateLastNodeID:(id)a0 completion:(id /* block */)a1;
- (void)updateOperationalCertificate:(id)a0 completion:(id /* block */)a1;
- (void)updateRootCertificate:(id)a0 completion:(id /* block */)a1;

@end
