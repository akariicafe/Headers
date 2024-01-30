@class SRDefaults, NSString, NSDictionary, NSXPCConnection, SRDatastore, NSArray, SRDaemonNotification;
@protocol SRSensorWriterDelegate;

@interface SRSensorWriter : NSObject <SRAuthorizationStoreDelegate, SRDaemonNotificationDelegate> {
    BOOL _monitoring;
    id<SRSensorWriterDelegate> _delegate;
    SRDaemonNotification *_daemonNotification;
    SRDefaults *_defaults;
    SRDatastore *_datastore;
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
@property (copy, nonatomic) NSArray *_requestedConfigurations;
@property (getter=isMonitoring) BOOL monitoring;
@property (weak) id<SRSensorWriterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)remoteInterface;
+ (id)clientInterface;
+ (id)connectionToDaemon;

- (void)setMetadata:(id)a0;
- (void)setMetadata:(id)a0 continuousTimestamp:(unsigned long long)a1;
- (id)init;
- (BOOL)_setSensorConfiguration:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (void)registerWithDaemonForWritingIfNeededWithReply:(id /* block */)a0;
- (void)resetDatastoreFiles:(id)a0;
- (void)authorizationStore:(id)a0 resetAuthorizations:(id)a1 forBundleId:(id)a2;
- (BOOL)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 timestamp:(double)a2 error:(id *)a3;
- (void)flushDatabase;
- (void)dealloc;
- (void)requestNewSegment;
- (void)provideSample:(id)a0 timestamp:(double)a1;
- (void)setupConnection;
- (void)provideSampleData:(id)a0 continuousTimestamp:(unsigned long long)a1;
- (void)checkForMonitoring;
- (id)initWithIdentifier:(id)a0;
- (BOOL)provideSampleData:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (void)authorizationStore:(id)a0 revokedAuthorizations:(id)a1 forBundleId:(id)a2;
- (void)daemonNotificationDaemonDidStart:(id)a0;
- (void)daemonForcedResetDatastoreFiles:(id)a0;
- (void)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 timestamp:(double)a2;
- (void)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)provideSample:(id)a0 timestamp:(double)a1 error:(id *)a2;
- (BOOL)_setSensorConfiguration:(id)a0 error:(id *)a1;
- (void)evaluateAuthorizationState;
- (void)daemonNotificationDaemonDidChangeTimeSignificantly:(id)a0;
- (BOOL)provideSampleData:(id)a0 timestamp:(double)a1 error:(id *)a2;
- (void)authorizationStore:(id)a0 grantedAuthorizations:(id)a1 forBundleId:(id)a2;
- (id)initWithIdentifier:(id)a0 xpcConnection:(id)a1 daemonNotification:(id)a2;
- (BOOL)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 continuousTimestamp:(unsigned long long)a2 error:(id *)a3;
- (BOOL)provideSampleData:(id)a0 error:(id *)a1;
- (void)authorizationStore:(id)a0 didDetermineInitialAuthorizationValues:(id)a1;
- (void)daemonNotificationDaemonDidResetDatastore:(id)a0;
- (BOOL)provideSample:(id)a0 error:(id *)a1;
- (void)provideSampleData:(id)a0 timestamp:(double)a1;
- (void)provideSample:(id)a0;
- (void)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 continuousTimestamp:(unsigned long long)a2;
- (BOOL)provideSampleBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (void)provideSampleData:(id)a0;

@end
