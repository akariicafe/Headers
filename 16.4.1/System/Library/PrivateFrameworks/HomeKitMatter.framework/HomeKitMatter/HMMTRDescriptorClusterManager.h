@interface HMMTRDescriptorClusterManager : HMFObject

+ (id)sharedManager;
+ (id)logCategory;

- (id)_buildClustersInUseDictWithClustersInUse:(id)a0;
- (void)_populateAttributeValuesForClusterClassName:(id)a0 clusterClassFeatureMap:(id)a1 endpoint:(id)a2 device:(id)a3 deviceTopology:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)_queryEndpointsForClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_removeDisabledCharacteristicsFromServiceDescription:(id)a0 endpoint:(id)a1 topology:(id)a2;
- (void)_runBlockForAllEndpointsWithClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 finishedRunningAllBlocksPromise:(id)a4 block:(id /* block */)a5;
- (void)_updateOTARequestorEndpointsInTopology:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 callbackQueue:(id)a3 clusterClassToQueryForFeatureMap:(id)a4 hapServicesToCheckForFeatureMap:(id)a5 hapServicesInUse:(id)a6 deviceTopology:(id)a7 bridgeAggregateNodeEndpoint:(id)a8 server:(id)a9 lastError:(id)a10 completionHandler:(id /* block */)a11;
- (void)endpointForClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchDeviceTypesForDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchDeviceTypesForEndpoints:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 lastError:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchEndpointsForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchHAPCategoryForCHIPDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)a0 deviceTopology:(id)a1 endpointDeviceTypes:(id)a2 accessoryInfo:(id)a3 hapToCHIPClusterMappingArray:(id)a4 device:(id)a5 isBridge:(BOOL)a6 bridgeAggregateNodeEndpoint:(id)a7 isComposedDevice:(BOOL)a8 server:(id)a9 callbackQueue:(id)a10 completionHandler:(id /* block */)a11;
- (void)fetchHAPServicesForCHIPDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchHAPServicesForEndpoints:(id)a0 endpointDeviceTypes:(id)a1 device:(id)a2 nodeId:(id)a3 isBridge:(BOOL)a4 bridgeAggregateNodeEndpoint:(id)a5 server:(id)a6 topology:(id)a7 hapAccessoryInfo:(id)a8 callbackQueue:(id)a9 completionHandler:(id /* block */)a10;
- (id)getBridgeEndpointsDeviceTypes:(id)a0 endpointDeviceTypes:(id)a1;
- (id)hapServiceDescriptionForServiceType:(id)a0 clustersInUse:(id)a1 endpoint:(id)a2 name:(id)a3 hapToCHIPClusterMappingArray:(id)a4 clusterClassToQueryForFeatureMap:(id)a5 hapServicesToCheckForFeatureMap:(id)a6 server:(id)a7;
- (id)hapServiceDescriptionsForTopology:(id)a0 namesDictionary:(id)a1 server:(id)a2;
- (id)runBlockForAllEndpointsWithClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 block:(id /* block */)a3;

@end
