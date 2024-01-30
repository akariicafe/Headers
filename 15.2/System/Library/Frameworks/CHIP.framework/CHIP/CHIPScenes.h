@interface CHIPScenes : CHIPCluster

@property (readonly) struct ScenesCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeNameSupportWithResponseHandler:(id /* block */)a0;
- (void)addScene:(unsigned short)a0 sceneId:(unsigned char)a1 transitionTime:(unsigned short)a2 sceneName:(id)a3 clusterId:(unsigned int)a4 length:(unsigned char)a5 value:(unsigned char)a6 responseHandler:(id /* block */)a7;
- (void)getSceneMembership:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)recallScene:(unsigned short)a0 sceneId:(unsigned char)a1 transitionTime:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)removeAllScenes:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)removeScene:(unsigned short)a0 sceneId:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)storeScene:(unsigned short)a0 sceneId:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)viewScene:(unsigned short)a0 sceneId:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)readAttributeSceneCountWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentSceneWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentGroupWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSceneValidWithResponseHandler:(id /* block */)a0;

@end
