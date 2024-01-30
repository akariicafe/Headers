@interface CHIPSwitch : CHIPCluster

@property (readonly) struct SwitchCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeNumberOfPositionsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCurrentPositionWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned char)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCurrentPositionWithResponseHandler:(id /* block */)a0;

@end
