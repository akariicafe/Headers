@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, WCXPCManagerDelegate;

@interface WCXPCManager : NSObject <NSXPCConnectionDelegate, WCXPCManagerClientProtocol, WCXPCManagerDaemonProtocol>

@property (readonly) NSXPCConnection *connection;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property int listenerResumedToken;
@property BOOL connectionInvalidated;
@property BOOL reconnectFailed;
@property unsigned long long reconnectRetryCount;
@property (weak) NSObject<WCXPCManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedManager;
+ (id)clientInterface;
+ (id)daemonInterface;

- (void)invalidateConnection;
- (void)handleRequest:(id)a0;
- (void)handleResponse:(id)a0;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)interruptionHandler;
- (void)setupConnection;
- (void)sessionReadyForInitialStateForClientPairingID:(id)a0 supportsActiveDeviceSwitch:(BOOL)a1 withErrorHandler:(id /* block */)a2;
- (void)updateApplicationContext:(id)a0 clientPairingID:(id)a1 errorHandler:(id /* block */)a2;
- (void)transferFile:(id)a0 sandboxToken:(id)a1 clientPairingID:(id)a2 errorHandler:(id /* block */)a3;
- (void)cancelSendWithIdentifier:(id)a0;
- (void)transferUserInfo:(id)a0 withURL:(id)a1 clientPairingID:(id)a2 errorHandler:(id /* block */)a3;
- (void)handleSentMessageWithIdentifier:(id)a0 error:(id)a1;
- (void)acknowledgeFileIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)acknowledgeFileResultIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)acknowledgeUserInfoIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)acknowledgeUserInfoResultIndexWithIdentifier:(id)a0 clientPairingID:(id)a1;
- (void)handleApplicationContextWithPairingID:(id)a0;
- (void)handleFileResultWithPairingID:(id)a0;
- (void)handleIncomingFileWithPairingID:(id)a0;
- (void)handleUserInfoResultWithPairingID:(id)a0;
- (void)handleIncomingUserInfoWithPairingID:(id)a0;
- (void)handleActiveDeviceSwitchStarted;
- (void)handleSessionStateChanged:(id)a0;
- (void)handleMessageSendingAllowed;
- (void)sendMessage:(id)a0 clientPairingID:(id)a1 acceptanceHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)cancelAllOutstandingMessages;
- (void)sendMessage:(id)a0 clientPairingID:(id)a1 acceptanceHandler:(id /* block */)a2;
- (void)onqueue_retryConnectIfNecessary;
- (void)onqueue_reconnect;
- (void)handleInterruptedConnection;

@end
