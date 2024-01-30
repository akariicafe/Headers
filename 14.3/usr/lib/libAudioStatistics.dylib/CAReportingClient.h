@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)sharedInstance;
+ (id)getClient;
+ (void)destroyClient;

- (long long)createReporterID:(unsigned int)a0;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporters:(id)a3;
- (void)addReporter:(id)a0;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void).cxx_destruct;
- (void)disconnectReporters;
- (void)reconnectReporter:(id)a0;
- (id)listClientReporterIDs;
- (void)startReporters:(id)a0;
- (void)stopReporters:(id)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (id)reporterWithID:(long long)a0;
- (id)listServerReporterIDs;
- (void)destroyReporterWithID:(long long)a0;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (void)destoryService;
- (id)getConfigurationForReporterID:(long long)a0;
- (void)reconnectReporters;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;

@end
