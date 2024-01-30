@interface CHIPLevelControl : CHIPCluster

@property (readonly) struct LevelControlCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)move:(unsigned char)a0 rate:(unsigned char)a1 optionMask:(unsigned char)a2 optionOverride:(unsigned char)a3 responseHandler:(id /* block */)a4;
- (void)moveToLevel:(unsigned char)a0 transitionTime:(unsigned short)a1 optionMask:(unsigned char)a2 optionOverride:(unsigned char)a3 responseHandler:(id /* block */)a4;
- (void)moveToLevelWithOnOff:(unsigned char)a0 transitionTime:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)moveWithOnOff:(unsigned char)a0 rate:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)step:(unsigned char)a0 stepSize:(unsigned char)a1 transitionTime:(unsigned short)a2 optionMask:(unsigned char)a3 optionOverride:(unsigned char)a4 responseHandler:(id /* block */)a5;
- (void)stepWithOnOff:(unsigned char)a0 stepSize:(unsigned char)a1 transitionTime:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)stop:(unsigned char)a0 optionOverride:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)stopWithOnOff:(id /* block */)a0;
- (void)readAttributeCurrentLevelWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCurrentLevelWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned char)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCurrentLevelWithResponseHandler:(id /* block */)a0;

@end
