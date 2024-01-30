@interface CHIPTvChannel : CHIPCluster

@property (readonly) struct TvChannelCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)changeChannel:(id)a0 responseHandler:(id /* block */)a1;
- (void)changeChannelByNumber:(unsigned short)a0 minorNumber:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)skipChannel:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeTvChannelListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeTvChannelLineupWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentTvChannelWithResponseHandler:(id /* block */)a0;

@end
