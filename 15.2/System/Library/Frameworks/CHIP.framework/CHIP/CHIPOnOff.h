@interface CHIPOnOff : CHIPCluster

@property (readonly) struct OnOffCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void)on:(id /* block */)a0;
- (void)toggle:(id /* block */)a0;
- (void)off:(id /* block */)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeFeatureMapWithResponseHandler:(id /* block */)a0;
- (void)offWithEffect:(unsigned char)a0 effectVariant:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)onWithRecallGlobalScene:(id /* block */)a0;
- (void)onWithTimedOff:(unsigned char)a0 onTime:(unsigned short)a1 offWaitTime:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)readAttributeOnOffWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeOnOffWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributeOnOffWithResponseHandler:(id /* block */)a0;
- (void)readAttributeGlobalSceneControlWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOnTimeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOnTimeWithValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeOffWaitTimeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOffWaitTimeWithValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeStartUpOnOffWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeStartUpOnOffWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;

@end
