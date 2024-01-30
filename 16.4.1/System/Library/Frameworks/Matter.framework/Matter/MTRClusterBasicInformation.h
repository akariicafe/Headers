@class MTRDevice;

@interface MTRClusterBasicInformation : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (void)mfgSpecificPingWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)mfgSpecificPingWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeCapabilityMinimaWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeDataModelRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeHardwareVersionStringWithParams:(id)a0;
- (id)readAttributeHardwareVersionWithParams:(id)a0;
- (id)readAttributeLocalConfigDisabledWithParams:(id)a0;
- (id)readAttributeLocationWithParams:(id)a0;
- (id)readAttributeManufacturingDateWithParams:(id)a0;
- (id)readAttributeNodeLabelWithParams:(id)a0;
- (id)readAttributePartNumberWithParams:(id)a0;
- (id)readAttributeProductIDWithParams:(id)a0;
- (id)readAttributeProductLabelWithParams:(id)a0;
- (id)readAttributeProductNameWithParams:(id)a0;
- (id)readAttributeProductURLWithParams:(id)a0;
- (id)readAttributeReachableWithParams:(id)a0;
- (id)readAttributeSerialNumberWithParams:(id)a0;
- (id)readAttributeSoftwareVersionStringWithParams:(id)a0;
- (id)readAttributeSoftwareVersionWithParams:(id)a0;
- (id)readAttributeUniqueIDWithParams:(id)a0;
- (id)readAttributeVendorIDWithParams:(id)a0;
- (id)readAttributeVendorNameWithParams:(id)a0;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLocalConfigDisabledWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeLocationWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeLocationWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeNodeLabelWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeNodeLabelWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
