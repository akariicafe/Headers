@interface CHIPMediaInput : CHIPCluster

@property (readonly) struct MediaInputCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)hideInputStatus:(id /* block */)a0;
- (void)renameInput:(unsigned char)a0 name:(id)a1 responseHandler:(id /* block */)a2;
- (void)selectInput:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)showInputStatus:(id /* block */)a0;
- (void)readAttributeMediaInputListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentMediaInputWithResponseHandler:(id /* block */)a0;

@end
