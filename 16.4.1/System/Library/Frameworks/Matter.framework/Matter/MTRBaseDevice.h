@class MTRDeviceController;

@interface MTRBaseDevice : NSObject

@property (readonly, nonatomic) BOOL isPASEDevice;
@property (readonly, nonatomic) MTRDeviceController *deviceController;
@property (readonly, nonatomic) unsigned long long nodeID;
@property (readonly) unsigned char sessionTransportType;

+ (id)CHIPEncodeAndDecodeNSObject:(id)a0;
+ (id)deviceWithNodeID:(id)a0 controller:(id)a1;

- (void).cxx_destruct;
- (void)deregisterReportHandlersWithClientQueue:(id)a0 completion:(id /* block */)a1;
- (void)deregisterReportHandlersWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithNodeID:(id)a0 controller:(id)a1;
- (id)initWithPASEDevice:(void *)a0 controller:(id)a1;
- (void)invalidateCASESession;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)invokeCommandWithEndpointId:(id)a0 clusterId:(id)a1 commandId:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 clientQueue:(id)a5 completion:(id /* block */)a6;
- (void)openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)readAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 params:(id)a3 clientQueue:(id)a4 completion:(id /* block */)a5;
- (void)readAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)readEventsWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2 params:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)subscribeAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 minInterval:(id)a3 maxInterval:(id)a4 params:(id)a5 clientQueue:(id)a6 reportHandler:(id /* block */)a7 subscriptionEstablished:(id /* block */)a8;
- (void)subscribeToAttributesWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3 queue:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)subscribeToEventsWithEndpointID:(id)a0 clusterID:(id)a1 eventID:(id)a2 params:(id)a3 queue:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)subscribeWithQueue:(id)a0 minInterval:(unsigned short)a1 maxInterval:(unsigned short)a2 params:(id)a3 cacheContainer:(id)a4 attributeReportHandler:(id /* block */)a5 eventReportHandler:(id /* block */)a6 errorHandler:(id /* block */)a7 subscriptionEstablished:(id /* block */)a8 resubscriptionScheduled:(id /* block */)a9;
- (void)subscribeWithQueue:(id)a0 params:(id)a1 clusterStateCacheContainer:(id)a2 attributeReportHandler:(id /* block */)a3 eventReportHandler:(id /* block */)a4 errorHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6 resubscriptionScheduled:(id /* block */)a7;
- (void)writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 queue:(id)a5 completion:(id /* block */)a6;
- (void)writeAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 clientQueue:(id)a5 completion:(id /* block */)a6;

@end
