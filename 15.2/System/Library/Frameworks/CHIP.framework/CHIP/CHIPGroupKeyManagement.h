@interface CHIPGroupKeyManagement : CHIPCluster

@property (readonly) struct GroupKeyManagementCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeGroupsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeGroupKeysWithResponseHandler:(id /* block */)a0;

@end
