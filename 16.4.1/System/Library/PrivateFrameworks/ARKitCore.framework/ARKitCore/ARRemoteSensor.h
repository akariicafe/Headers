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
- (id)initWithServiceName:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)initWithServerConnection:(id)a0;
- (unsigned long long)providedDataTypes;
- (void)sensorDidFailWithError:(id)a0;
- (void)sensorDidOutputSensorData:(id)a0;
- (void)sensorDidPause;
- (void)sensorDidRestart;
- (void)sensorDidStart;

@end
