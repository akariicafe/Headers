@interface CHIPBinding : CHIPCluster

@property (readonly) struct BindingCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)bind:(unsigned long long)a0 groupId:(unsigned short)a1 endpointId:(unsigned short)a2 clusterId:(unsigned int)a3 responseHandler:(id /* block */)a4;
- (void)unbind:(unsigned long long)a0 groupId:(unsigned short)a1 endpointId:(unsigned short)a2 clusterId:(unsigned int)a3 responseHandler:(id /* block */)a4;

@end
