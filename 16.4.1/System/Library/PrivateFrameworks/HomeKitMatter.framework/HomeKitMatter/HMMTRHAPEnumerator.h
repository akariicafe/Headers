@class NSDictionary;

@interface HMMTRHAPEnumerator : HMFObject

@property (retain, nonatomic) NSDictionary *clusterIDCharacteristicMap;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createBridgedHAPAccessoryWithServer:(id)a0 services:(id)a1 instanceId:(id)a2 endpointID:(id)a3;
- (void)_createHAPServicesFromServiceDescriptions:(id)a0 topology:(id)a1 nodeID:(id)a2 accessoryEndpointID:(id)a3 services:(out id)a4 startingServiceInstanceID:(inout long long *)a5 primaryAccessory:(id)a6;
- (id)enumerateBridgedAccessoriesFromAccessories:(id)a0 serviceDescriptionsDictionary:(id)a1 namesDictionary:(id)a2 topology:(id)a3 server:(id)a4 legacyInstanceIDAssignment:(BOOL)a5;
- (id)enumerateServicesFromServices:(id)a0 serviceDescriptionsDictionary:(id)a1 topology:(id)a2 nodeID:(id)a3 primaryAccessory:(id)a4 legacyInstanceIDAssignment:(BOOL)a5;
- (id)initWithClusterIDCharacteristicMap:(id)a0;

@end
