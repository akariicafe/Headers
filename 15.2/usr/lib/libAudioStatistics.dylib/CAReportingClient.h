@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)sharedInstance;
+ (void)destroyClient;
+ (id)getClient;

- (id)listClientReporterIDs;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;
- (void)destoryService;
- (void)reconnectReporters;
- (void)destroyReporterWithID:(long long)a0;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporters:(id)a3;
- (id)listServerReporterIDs;
- (void)disconnectReporters;
- (void).cxx_destruct;
- (id)getConfigurationForReporterID:(long long)a0;
- (void)addReporter:(id)a0;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void)startReporters:(id)a0;
- (void)dealloc;
- (long long)createReporterID:(unsigned int)a0;
- (void)stopReporters:(id)a0;
- (id)reporterWithID:(long long)a0;
- (void)reconnectReporter:(id)a0;

@end
