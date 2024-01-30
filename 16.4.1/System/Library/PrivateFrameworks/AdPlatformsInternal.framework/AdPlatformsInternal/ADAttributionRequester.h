@class NSString, NSNumber, NSXPCConnection;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSNumber *transactionToken;

- (id)initWithConnection:(id)a0 bundleID:(id)a1 transactionID:(id)a2;
- (void)overrideAttributionData:(id)a0;
- (id)currentRecord:(id *)a0;
- (void)_clearDownloadDataFromRequest:(id)a0;
- (int)appRunState;
- (void)setStocksAdEnabled:(BOOL)a0;
- (void)attachSearchMetadataTo:(id)a0 forAdamID:(id)a1;
- (void)beginAttributionRequest:(id)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)makeAttributionRequestWithObject:(id)a0 andHandler:(id /* block */)a1;
- (void)setServerToTest:(long long)a0;
- (void)requestAttributionDetailsWithBlock:(id /* block */)a0;
- (void)requestAttributionDetails:(id /* block */)a0;
- (void)attachDownloadDataTo:(id)a0 forAdamID:(id)a1;
- (void).cxx_destruct;
- (BOOL)productionClient;
- (BOOL)_isAppTrackingAuthorized;

@end
