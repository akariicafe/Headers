@interface CHIPBasic : CHIPCluster

@property (readonly) struct BasicCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeVendorNameWithResponseHandler:(id /* block */)a0;
- (void)mfgSpecificPing:(id /* block */)a0;
- (void)readAttributeInteractionModelVersionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeVendorIDWithResponseHandler:(id /* block */)a0;
- (void)readAttributeProductNameWithResponseHandler:(id /* block */)a0;
- (void)readAttributeProductIDWithResponseHandler:(id /* block */)a0;
- (void)readAttributeUserLabelWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeUserLabelWithValue:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeLocationWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeLocationWithValue:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeHardwareVersionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeHardwareVersionStringWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSoftwareVersionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSoftwareVersionStringWithResponseHandler:(id /* block */)a0;
- (void)readAttributeManufacturingDateWithResponseHandler:(id /* block */)a0;
- (void)readAttributePartNumberWithResponseHandler:(id /* block */)a0;
- (void)readAttributeProductURLWithResponseHandler:(id /* block */)a0;
- (void)readAttributeProductLabelWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSerialNumberWithResponseHandler:(id /* block */)a0;
- (void)readAttributeLocalConfigDisabledWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeLocalConfigDisabledWithValue:(BOOL)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeReachableWithResponseHandler:(id /* block */)a0;

@end
