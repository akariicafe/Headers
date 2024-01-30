@class NSXPCInterface, NSMutableArray, NSXPCConnection;

@interface TransactionManager : CHSynchronizedLoggable {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
    id _syncHelperReadyNotificationRef;
    NSMutableArray *_queuedTransactions;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)init;
- (void)setupConnectionHandlers_sync;
- (void)createXpcConnection_sync;
- (void)dealloc;
- (void)appendTransactions:(id)a0;
- (void)appendTransactions_sync:(id)a0;
- (void)createXpcConnection;

@end
