@class NSXPCInterface, NSMutableArray, NSXPCConnection;

@interface TransactionManager : CHSynchronizedLoggable {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;

- (void)createXpcConnection;
- (void)setupConnectionHandlers_sync;
- (void)appendTransactions_sync:(id)a0;
- (void)appendTransactions:(id)a0;
- (void)dealloc;
- (void)createXpcConnection_sync;
- (id)init;
- (void).cxx_destruct;

@end
