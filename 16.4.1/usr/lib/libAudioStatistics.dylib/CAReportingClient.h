@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)sharedInstance;
+ (void)destroyClient;
+ (id)getClient;

- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporters:(id)a3;
- (void)startReporters:(id)a0;
- (void)addReporter:(id)a0;
- (void)destroyReporterWithID:(long long)a0;
- (void)reconnectReporter:(id)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (id)listClientReporterIDs;
- (id)reporterWithID:(long long)a0;
- (id)listServerReporterIDs;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void)disconnectReporters;
- (id)getConfigurationForReporterID:(long long)a0;
- (void)reconnectReporters;
- (void)dealloc;
- (void)stopReporters:(id)a0;
- (void)destroyService;
- (long long)createReporterID:(unsigned int)a0;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;
- (void).cxx_destruct;

@end
