@class NSXPCInterface, NSMutableArray, NSXPCConnection;

@interface TransactionManager : CHSynchronizedLoggable {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;

- (id)init;
- (void).cxx_destruct;
- (void)appendTransactions:(id)a0;
- (void)dealloc;
- (void)createXpcConnection;
- (void)createXpcConnection_sync;
- (void)setupConnectionHandlers_sync;
- (void)appendTransactions_sync:(id)a0;

@end
