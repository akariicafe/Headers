@class NSXPCConnection;

@interface CARConnectionTimeStore : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)_CARConnectionServiceInterface;

- (void)_setupConnection;
- (void)_xpcFetchWithSynchronousServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_xpcFetchWithServiceBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)sendConnectionEvent:(id)a0 completion:(id /* block */)a1;
- (void)clearHistoricalConnectionsWithCompletion:(id /* block */)a0;
- (id)init;
- (void)fetchRecentSessions:(id /* block */)a0;
- (void)syncSendConnectionEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
