@class NSString, NSMutableArray, AXAccessQueue;

@interface AXIPCClient : NSObject {
    unsigned int _assignedServerMachPort;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientIdentifierLock;
    NSString *_clientIdentifier;
    struct __CFRunLoopSource { } *_clientSource;
    unsigned long long _connectionAttempts;
    NSMutableArray *_outstandingAsyncRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionServiceLock;
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
@property (nonatomic) float timeout;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned int clientCallbackPort;
@property (readonly, nonatomic) struct __CFRunLoopSource { } *clientCallbackSource;
@property (nonatomic) BOOL shouldRegisterCallbackSourceOnMainRunloop;

+ (void)initialize;
+ (id)allClients;

- (void)_serverDied;
- (BOOL)disconnectWithError:(id *)a0;
- (BOOL)sendAsyncMessage:(id)a0 withReplyHandler:(id /* block */)a1;
- (BOOL)_handleErrorWithMessage:(id)a0 outError:(id *)a1;
- (id)initWithPort:(unsigned int)a0;
- (BOOL)sendSimpleMessage:(id)a0 withError:(id *)a1;
- (BOOL)_verifyConnectionWithError:(id *)a0;
- (BOOL)_prepareToSendMessage:(id)a0 withError:(id *)a1 prepSuccessHandler:(id /* block */)a2;
- (BOOL)sendSimpleMessage:(id)a0 synchronizationPort:(unsigned int)a1 error:(id *)a2;
- (void)_commonInit;
- (void)establishConnectionWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)_registerWithServer;
- (id)sendMessage:(id)a0 withError:(id *)a1;
- (BOOL)sendAsyncMessage:(id)a0 replyOnQueue:(id)a1 replyHandler:(id /* block */)a2;
- (BOOL)connectWithError:(id *)a0;
- (id)_descriptionForMachError:(int)a0;
- (void)_sendRegistrationMessageWithRetries:(int)a0;
- (void)sendSimpleMessage:(id)a0;
- (id)initWithServiceName:(id)a0;
- (BOOL)_handleErrorWithMessage:(id)a0 machError:(int)a1 outError:(id *)a2;
- (void)dealloc;
- (void)_attemptToEstablishConnection;
- (id)_createRegistrationWithReplyMachPort:(unsigned int)a0 forAsyncReplyOnQueue:(id)a1 responseHandler:(id /* block */)a2;
- (BOOL)verifyConnectionExists;
- (id)description;
- (void).cxx_destruct;

@end
