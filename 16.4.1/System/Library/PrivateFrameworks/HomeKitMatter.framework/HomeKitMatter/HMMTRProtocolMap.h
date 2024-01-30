@class NSNumber, NSDictionary;

@interface HMMTRProtocolMap : HMFObject

@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSNumber *schemaVersion;
@property (readonly, nonatomic) NSDictionary *rawPlist;
@property (readonly, nonatomic) NSDictionary *hapToCHIPClusterMappingArray;

+ (id)logCategory;
+ (id)mapActiveState:(id)a0;
+ (BOOL)checkIfCharacteristicsIsOfTypeTemp:(id)a0;
+ (id)customMapEventForCharacteristic:(id)a0 event:(id)a1 value:(id)a2;
+ (id)customMapReadForCharacteristic:(id)a0 value:(id)a1;
+ (id)customMapWriteForCharacteristic:(id)a0 value:(id)a1;
+ (id)linearMapForCharacteristic:(id)a0 value:(id)a1 fromRange:(id)a2 toRange:(id)a3;
+ (id)mapCurrentHeatingCoolingState:(id)a0;
+ (id)mapCurrentSystemMode:(id)a0;
+ (id)mapFanMode:(id)a0;
+ (id)mapOTAStagingNotReadyReasonsState:(id)a0;
+ (id)mapOTAUpdateNotReadyReasonsState:(id)a0;
+ (id)mapOTAUpdateState:(id)a0;
+ (id)mapPositionState:(id)a0;
+ (id)mapTargetHeatingCoolingState:(id)a0;
+ (id)mapTargetSystemMode:(id)a0;
+ (id)protocolMap;

- (id)init;
- (void).cxx_destruct;
- (id)retrieveHAPToCHIPClusterMapping;
- (id /* block */)_buildEventMapper:(id)a0 characteristicsDict:(id)a1;
- (id /* block */)_buildExpectedValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2 valueMapper:(id /* block */)a3;
- (id /* block */)_buildValueMapper:(id)a0 characteristicsDict:(id)a1 operation:(unsigned long long)a2 forMTRCluster:(BOOL)a3;
- (id)_characteristicDescriptionForCharacteristicWithUUID:(id)a0 characteristicsDict:(id)a1 chipClusterName:(id)a2 operationType:(unsigned long long)a3 value:(id)a4 forMTRCluster:(BOOL)a5;
- (id)_characteristicsDictionaryForCharacteristic:(id)a0 clusterIDCharacteristicMap:(id)a1;
- (id)_characteristicsDictionaryForCharacteristicUUID:(id)a0 clusterIDCharacteristicMap:(id)a1;
- (id)_chipClusterFunctionNameForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2 forMTRCluster:(BOOL)a3;
- (id)_chipParamsDictionaryForOperationType:(unsigned long long)a0 operationDictionary:(id)a1 value:(id)a2;
- (id)_descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 forMTRCluster:(BOOL)a3 clusterIDCharacteristicMap:(id)a4;
- (BOOL)_isValidCharacteristicValue:(id)a0 value:(id)a1;
- (id)_mtrClusterReadFunctionNameFromBaseClusterFunctionName:(id)a0;
- (id)_mtrClusterWriteFunctionNameFromBaseClusterFunctionName:(id)a0;
- (id)_protocolMapCharacteristicsKeyForOperationType:(unsigned long long)a0;
- (id)categoriesForDeviceTypes:(id)a0;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 clusterIDCharacteristicMap:(id)a2;
- (id)descriptionForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 clusterIDCharacteristicMap:(id)a3;
- (id)descriptionOfMTRClusterForCharacteristicUUID:(id)a0 operation:(unsigned long long)a1 value:(id)a2 clusterIDCharacteristicMap:(id)a3;
- (id)getClusterClassForCharacteristic:(id)a0 clusterIDCharacteristicMap:(id)a1;
- (id)getIDForCharacteristic:(id)a0;
- (id)getRequiredFeaturesBitmapForCharacteristic:(id)a0;
- (id)getUpdatedLinkedCharacteristics:(id)a0 clusterIDCharacteristicMap:(id)a1;
- (id)optionalCharacteristicsForService:(id)a0;
- (BOOL)optionalServiceLabelIndexIncludedInService:(id)a0;
- (id)reportDescriptionForCharacteristic:(id)a0 clusterIDCharacteristicMap:(id)a1;
- (id)requiredCharacteristicsForService:(id)a0;
- (id)servicesForDeviceTypes:(id)a0;
- (void)updateMetadataForCharacteristic:(id)a0 metadata:(id)a1 endpointID:(id)a2 topology:(id)a3 clusterIDCharacteristicMap:(id)a4;

@end
