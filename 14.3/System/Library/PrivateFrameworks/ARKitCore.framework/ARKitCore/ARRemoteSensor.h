@class ARServerConnection, NSString;
@protocol ARSensorDelegate, ARRemoteSensorService;

@interface ARRemoteSensor : NSObject <ARRemoteSensorClient, ARServerConnectionDelegate, ARSensor> {
    id<ARRemoteSensorService> _serviceProxy;
}

@property (getter=isRunning) BOOL running;
@property (weak, nonatomic) id<ARSensorDelegate> delegate;
@property (readonly, nonatomic) ARServerConnection *serverConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (id)initWithListenerEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithServiceName:(id)a0;
- (void)start;
- (unsigned long long)providedDataTypes;
- (id)initWithServerConnection:(id)a0;
- (void)sensorDidFailWithError:(id)a0;
- (void)sensorDidOutputSensorData:(id)a0;
- (void)sensorDidPause;
- (void)sensorDidRestart;
- (void)sensorDidStart;

@end
