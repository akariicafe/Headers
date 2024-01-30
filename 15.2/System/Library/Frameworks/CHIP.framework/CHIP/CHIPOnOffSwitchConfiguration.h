@interface CHIPOnOffSwitchConfiguration : CHIPCluster

@property (readonly) struct OnOffSwitchConfigurationCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSwitchTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSwitchActionsWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeSwitchActionsWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;

@end
