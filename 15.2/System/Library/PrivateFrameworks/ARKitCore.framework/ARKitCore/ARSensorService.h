@class NSString;
@protocol ARRemoteSensorClient, ARSensor;

@interface ARSensorService : ARDaemonService <ARRemoteSensorService, ARSensorDelegate>

@property (retain, nonatomic) id<ARRemoteSensorClient> clientProxy;
@property (retain, nonatomic) id<ARSensor> sensor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnection:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)stop;
- (void)sensor:(id)a0 didOutputSensorData:(id)a1;
- (void)providedDataTypesWithReply:(id /* block */)a0;
- (void)sensor:(id)a0 didFailWithError:(id)a1;
- (void)sensorDidStart:(id)a0;
- (void)sensorDidPause:(id)a0;
- (void)sensorDidRestart:(id)a0;

@end
