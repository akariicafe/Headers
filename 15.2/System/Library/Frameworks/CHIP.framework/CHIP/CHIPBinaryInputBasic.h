@interface CHIPBinaryInputBasic : CHIPCluster

@property (readonly) struct BinaryInputBasicCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOutOfServiceWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOutOfServiceWithValue:(BOOL)a0 responseHandler:(id /* block */)a1;
- (void)readAttributePresentValueWithResponseHandler:(id /* block */)a0;
- (void)writeAttributePresentValueWithValue:(BOOL)a0 responseHandler:(id /* block */)a1;
- (void)configureAttributePresentValueWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributePresentValueWithResponseHandler:(id /* block */)a0;
- (void)readAttributeStatusFlagsWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeStatusFlagsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributeStatusFlagsWithResponseHandler:(id /* block */)a0;

@end
