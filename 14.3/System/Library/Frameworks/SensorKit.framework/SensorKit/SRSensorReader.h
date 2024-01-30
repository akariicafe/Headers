@class NSString, NSDictionary, SRAuthorizationClient, SRDatastore, NSXPCConnection, SRDaemonNotification;
@protocol SRSensorReaderDelegate;

@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate> {
    SRDaemonNotification *_daemonNotification;
    SRDatastore *_datastore;
    NSDictionary *_deviceDetails;
    double _serviceStartTime;
    double _earliestEligibleTime;
    _Atomic int _authState;
}

@property (copy) NSString *sensor;
@property (readonly, retain) SRDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property BOOL connectionDidInvalidate;
@property (retain) SRAuthorizationClient *authorizationClient;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSString *bundleId;
@property (readonly, nonatomic) Class sampleClass;
@property (readonly, nonatomic) Class exportingSampleClass;
@property (nonatomic) BOOL bypassHoldingPeriod;
@property (readonly, nonatomic) double earliestEligibleTime;
@property (readonly, nonatomic) double serviceStartTime;
@property (readonly) long long authorizationStatus;
@property (weak) id<SRSensorReaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id /* block */)createExportDataForServices:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)remoteInterface;
+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (id)new;
+ (void)requestAuthorizationForBundle:(id)a0 sensors:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)requestAuthorizationForBundle:(id)a0 sensors:(id)a1 legacyPromptErrorBehavior:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
+ (id /* block */)createExportDataWithCompletionHandler:(id /* block */)a0;
+ (void)authorizationRequestStatusForBundle:(id)a0 sensors:(id)a1 completionHandler:(id /* block */)a2;
+ (void)requestAuthorizationForSensors:(id)a0 completion:(id /* block */)a1;

- (void)fetch:(id)a0;
- (void)stopRecording;
- (void)startRecording;
- (void)setAuthorizationStatus:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)resetDatastoreFiles:(id)a0;
- (void)dealloc;
- (void)setupConnection;
- (void)daemonNotificationDaemonDidStart:(id)a0;
- (id /* block */)createExportDataWithCompletionHandler:(id /* block */)a0;
- (BOOL)isAuthorized;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 forBundleIdentifier:(id)a4;
- (id)initWithSensor:(id)a0 bundle:(id)a1;
- (id)initWithSensor:(id)a0 xpcConnection:(id)a1 daemonNotification:(id)a2 authorizationClient:(id)a3 bundleId:(id)a4;
- (void)setSampleClass:(Class)a0;
- (void)setExportingSampleClass:(Class)a0;
- (void)fetchReaderMetadata;
- (void)didCompleteFetch:(id)a0;
- (void)fetchingRequest:(id)a0 failedWithError:(id)a1;
- (BOOL)fetchingRequest:(id)a0 didFetchResult:(id)a1;
- (void)continueFetchRequest:(id)a0 from:(double)a1 to:(double)a2 withDatastoreFiles:(id)a3 callback:(id /* block */)a4;
- (void)fetchSampleBytesFrom:(double)a0 to:(double)a1 inSegment:(id)a2 fetchRequest:(id)a3 sampleCallback:(id /* block */)a4;
- (void)fetchSampleBytesFrom:(double)a0 to:(double)a1 inSegment:(id)a2 fetchRequest:(id)a3 retryAttempt:(long long)a4 sampleCallback:(id /* block */)a5;
- (void)startRecordingFailedWithError:(id)a0;
- (void)sensorReaderWillStartRecording;
- (void)startRecordingWithCompletionHandler:(id /* block */)a0;
- (void)_startRecordingWithSensorConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopRecordingFailedWithError:(id)a0;
- (void)sensorReaderDidStopRecording;
- (void)stopRecordingWithCompletionHandler:(id /* block */)a0;
- (void)fetchDevicesDidFailWithError:(id)a0;
- (void)didFetchDevices:(id)a0;
- (void)fetchDevices:(id /* block */)a0;
- (id)initWithSensor:(id)a0;
- (void)fetchDevices;
- (id)authorizedServices;

@end
