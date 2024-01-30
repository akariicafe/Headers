@interface CHIPOccupancySensing : CHIPCluster

@property (readonly) struct OccupancySensingCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOccupancyWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeOccupancyWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributeOccupancyWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOccupancySensorTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOccupancySensorTypeBitmapWithResponseHandler:(id /* block */)a0;

@end
