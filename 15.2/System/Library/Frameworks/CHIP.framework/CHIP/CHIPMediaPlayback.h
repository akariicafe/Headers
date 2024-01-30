@interface CHIPMediaPlayback : CHIPCluster

@property (readonly) struct MediaPlaybackCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)mediaFastForward:(id /* block */)a0;
- (void)mediaNext:(id /* block */)a0;
- (void)mediaPause:(id /* block */)a0;
- (void)mediaPlay:(id /* block */)a0;
- (void)mediaPrevious:(id /* block */)a0;
- (void)mediaRewind:(id /* block */)a0;
- (void)mediaSeek:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)mediaSkipBackward:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)mediaSkipForward:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)mediaStartOver:(id /* block */)a0;
- (void)mediaStop:(id /* block */)a0;

@end
