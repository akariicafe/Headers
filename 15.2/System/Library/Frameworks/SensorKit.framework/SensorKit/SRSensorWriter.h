@class NSXPCConnection, NSString, NSArray, SRAuthorizationStore, NSDictionary, SRDaemonNotification, NSObject, SRDefaults, SRDatastore;
@protocol OS_dispatch_queue, SRTCCStore, SRSensorWriterDelegate;

@interface SRSensorWriter : NSObject <SRAuthorizationStoreReaderAuthorizationDelegate, SRDaemonNotificationDelegate, SRAuthorizationClientDelegate> {
    id<SRSensorWriterDelegate> _delegate;
    SRDaemonNotification *_daemonNotification;
    SRDefaults *_defaults;
    SRDatastore *_datastore;
    _Atomic BOOL _monitoring;
    int _notifyToken;
}

@property (copy) NSString *sensorIdentifier;
@property (readonly, retain) SRDatastore *datastore;
@property (retain) NSDictionary *nextDatastoreFiles;
@property BOOL requestNewSegmentInFlight;
@property BOOL authorized;
@property BOOL connectionDidInterrupt;
@property BOOL connectionDidInvalidate;
@property (retain) NSXPCConnection *connection;
@property BOOL retryGetMonitoring;
@property long long _writerAuthorizationStatus;
@property (readonly, retain, nonatomic) NSString *writerAuthorizationService;
@property (retain) id<SRTCCStore> tccStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writerAuthorizationUpdateQueue;
@property (retain, nonatomic) SRAuthorizationStore *authStore;
@property (copy, nonatomic) NSArray *_requestedConfigurations;
@property (getter=isMonitoring) BOOL monitoring;
@property (weak) id<SRSensorWriterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)remoteInterface;
+ (id)connectionToDaemon;
+ (id)clientInterface;

- (id)initWithIdentifier:(id)a0;
- (BOOL)provideSampleData:(id)a0 error:(id *)a1;
- (void)authorizedServicesDidChange:(id)a0 deniedServices:(id)a1 dataCollectionEnabled:(BOOL)a2 onboardingCompleted:(BOOL)a3 lastModifiedTimes:(id)a4 forBundleIdentifier:(id)a5;
- (void)startUpdatingAuthorizations;
- (void)requestNewSegment;
- (BOOL)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (void)registerWithDaemonForWritingIfNeededWithReply:(id /* block */)a0;
- (void)flushDatabase;
- (void)evaluateAuthorizationStateWithNewValue:(BOOL)a0;
- (void)checkForMonitoring;
- (BOOL)provideSampleData:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (void)provideSampleData:(id)a0;
- (void)setMetadata:(id)a0;
- (void)updateWriterAuthorizationStatus;
- (void)daemonForcedResetDatastoreFiles:(id)a0;
- (void)daemonNotificationDaemonDidStart:(id)a0;
- (void)authorizationStore:(id)a0 didUpdateAuthorizationsForBundleId:(id)a1 sensors:(id)a2;
- (void)_requestWriterAuthorizationWithCompletion:(id /* block */)a0;
- (BOOL)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 continuousTimestamp:(unsigned long long)a2 error:(id *)a3;
- (void)authorizationStore:(id)a0 didDetermineInitialAuthorizationValues:(id)a1;
- (void)resetDatastoreFiles:(id)a0;
- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)a0;
- (void)provideSample:(id)a0 timestamp:(double)a1;
- (BOOL)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (void)evaluateAuthorizationState;
- (BOOL)_setSensorConfiguration:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_setSensorConfiguration:(id)a0 error:(id *)a1;
- (void)provideSampleData:(id)a0 timestamp:(double)a1;
- (id)init;
- (id)chooseAuthStore;
- (void)daemonNotificationDaemonDidResetDatastore:(id)a0;
- (void)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 continuousTimestamp:(unsigned long long)a2;
- (void)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 timestamp:(double)a2;
- (void)provideSampleData:(id)a0 continuousTimestamp:(unsigned long long)a1;
- (BOOL)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 timestamp:(double)a2 error:(id *)a3;
- (void)dealloc;
- (void)setMetadata:(id)a0 continuousTimestamp:(unsigned long long)a1;
- (void)setupConnection;
- (BOOL)provideSample:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 xpcConnection:(id)a1 daemonNotification:(id)a2 authStore:(id)a3 tccStore:(id)a4;
- (void)provideSample:(id)a0;
- (void)didReceiveUpdateToConfigurationRequests;
- (void)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)provideSample:(id)a0 timestamp:(double)a1 error:(id *)a2;
- (BOOL)provideSampleData:(id)a0 timestamp:(double)a1 error:(id *)a2;

@end
