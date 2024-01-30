@interface CHIPGroups : CHIPCluster

@property (readonly) struct GroupsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)addGroup:(unsigned short)a0 groupName:(id)a1 responseHandler:(id /* block */)a2;
- (void)addGroupIfIdentifying:(unsigned short)a0 groupName:(id)a1 responseHandler:(id /* block */)a2;
- (void)getGroupMembership:(unsigned char)a0 groupList:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)removeAllGroups:(id /* block */)a0;
- (void)removeGroup:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)viewGroup:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeNameSupportWithResponseHandler:(id /* block */)a0;

@end
