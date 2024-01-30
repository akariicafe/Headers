@class AXAccessQueue, NSString, NSMutableArray, NSLock;

@interface AXIPCClient : NSObject {
    NSLock *_serverPortLock;
    unsigned int _assignedServerMachPort;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientIdentifierLock;
    struct __CFRunLoopSource { } *_clientSource;
    unsigned long long _connectionAttempts;
    NSMutableArray *_outstandingAsyncRequests;
}

@property (nonatomic, getter=isConnected) BOOL connected;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) struct __CFMachPort { } *serverPort;
@property (retain, nonatomic) NSMutableArray *postConnectionTasks;
@property (retain, nonatomic) AXAccessQueue *connectionQueue;
@property (nonatomic) BOOL usesPerPidLookup;
@property (nonatomic) int pid;
@property (readonly, nonatomic) unsigned int serviceMachPort;
@property (copy, nonatomic) id /* block */ portDeathHandler;
@property (retain, nonatomic) AXAccessQueue *portDeathAccessQueue;
@property (nonatomic) float timeout;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned int clientCallbackPort;
@property (readonly, nonatomic) struct __CFRunLoopSource { } *clientCallbackSource;
@property (nonatomic) BOOL shouldRegisterCallbackSourceOnMainRunloop;

+ (void)initialize;
+ (id)allClients;

- (BOOL)_handleErrorWithMessage:(id)a0 outError:(id *)a1;
- (void)_sendRegistrationMessageWithRetries:(int)a0;
- (void)sendSimpleMessage:(id)a0;
- (void)_attemptToEstablishConnection;
- (void)_serverDied;
- (BOOL)sendSimpleMessage:(id)a0 synchronizationPort:(unsigned int)a1 error:(id *)a2;
- (BOOL)sendAsyncMessage:(id)a0 replyOnQueue:(id)a1 replyHandler:(id /* block */)a2;
- (id)_descriptionForMachError:(int)a0;
- (id)sendMessage:(id)a0 withError:(id *)a1;
- (BOOL)verifyConnectionExists;
- (id)description;
- (void)_registerWithServer;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)a0 forAsyncReplyOnQueue:(id)a1 responseHandler:(id /* block */)a2;
- (BOOL)_handleErrorWithMessage:(id)a0 machError:(int)a1 outError:(id *)a2;
- (void)_commonInit;
- (BOOL)sendSimpleMessage:(id)a0 withError:(id *)a1;
- (void)dealloc;
- (BOOL)_verifyConnectionWithError:(id *)a0;
- (BOOL)connectWithError:(id *)a0;
- (BOOL)sendAsyncMessage:(id)a0 withReplyHandler:(id /* block */)a1;
- (BOOL)disconnectWithError:(id *)a0;
- (BOOL)_prepareToSendMessage:(id)a0 withError:(id *)a1 prepSuccessHandler:(id /* block */)a2;
- (void)establishConnectionWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)initWithPort:(unsigned int)a0;

@end
