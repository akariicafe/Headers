@interface CHIPAudioOutput : CHIPCluster

@property (readonly) struct AudioOutputCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)renameOutput:(unsigned char)a0 name:(id)a1 responseHandler:(id /* block */)a2;
- (void)selectOutput:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeAudioOutputListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentAudioOutputWithResponseHandler:(id /* block */)a0;

@end
