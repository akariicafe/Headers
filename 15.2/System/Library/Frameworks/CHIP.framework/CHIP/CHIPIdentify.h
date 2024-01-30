@interface CHIPIdentify : CHIPCluster

@property (readonly) struct IdentifyCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)identify:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)identifyQuery:(id /* block */)a0;
- (void)readAttributeIdentifyTimeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeIdentifyTimeWithValue:(unsigned short)a0 responseHandler:(id /* block */)a1;

@end
