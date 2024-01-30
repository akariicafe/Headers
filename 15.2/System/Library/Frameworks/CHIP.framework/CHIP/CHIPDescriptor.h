@interface CHIPDescriptor : CHIPCluster

@property (readonly) struct DescriptorCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeDeviceListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeServerListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeClientListWithResponseHandler:(id /* block */)a0;
- (void)readAttributePartsListWithResponseHandler:(id /* block */)a0;

@end
