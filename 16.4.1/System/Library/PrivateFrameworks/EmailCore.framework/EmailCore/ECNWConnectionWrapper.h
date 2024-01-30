@class NSArray, NSString, NSConditionLock, NSError, NSObject, NSData;
@protocol OS_dispatch_group, OS_nw_error, OS_nw_endpoint, OS_dispatch_semaphore, OS_dispatch_queue, OS_nw_connection;

@interface ECNWConnectionWrapper : NSObject <ECNWConnectionWrapper> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_connection> *_connection;
    int _connectionState;
    NSObject<OS_dispatch_semaphore> *_eventSemaphore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSConditionLock *_readBufferLock;
    NSObject<OS_dispatch_group> *_writeGroup;
    BOOL _readScheduled;
    NSObject<OS_nw_error> *_readError;
    NSData *_buffer;
    unsigned long long _bufferOffset;
    NSString *_securityProtocol;
    BOOL _readable;
    BOOL _writable;
    double _connectTime;
}

@property (copy) id /* block */ bytesAvailableHandler;
@property (retain) NSError *error;
@property (nonatomic) unsigned int timeout;
@property (nonatomic) BOOL allowsTrustPrompt;
@property (nonatomic) BOOL usesOpportunisticSockets;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers;
@property (retain, nonatomic) NSArray *clientCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *networkAccountIdentifier;
@property (copy, nonatomic) NSString *connectionServiceType;
@property (nonatomic) BOOL isNonAppInitiated;
@property (readonly, copy, nonatomic) NSArray *serverCertificates;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isConstrained;
@property (readonly, nonatomic) BOOL isValid;
@property (copy, nonatomic) id /* block */ networkActivityChangeBlock;
@property (copy, nonatomic) id /* block */ serverTrustHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (BOOL)connectToHost:(id)a0 withPort:(unsigned int)a1 service:(id)a2;
- (long long)readBytesIntoBuffer:(char *)a0 maxLength:(unsigned long long)a1;
- (void)registerForBytesAvailableWithHandler:(id /* block */)a0;
- (void)unregisterForBytesAvailable;
- (id)securityProtocol;
- (void)stopActivity;
- (void)_handleConnectionFailure:(int)a0;
- (id)_createConnectionWithEndpoint:(id)a0 error:(int *)a1;
- (void)enableThroughputMonitoring:(BOOL)a0;
- (long long)writeBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)cancel;
- (void)_configureTLS:(id)a0;
- (void)dealloc;
- (void)_closeWithErrorDomain:(id)a0 code:(long long)a1;
- (void)close;
- (void)_scheduleNextRead;
- (void)startActivity;
- (void)_closeWithError:(id)a0;
- (id)init;
- (BOOL)_connectToEndpoint:(id)a0 service:(id)a1;
- (void)_networkActivityStarted;
- (void)_networkActivityEnded;
- (id)_negotiatedSecurityProtocol;
- (void)_handleConnectionReady;
- (void).cxx_destruct;
- (BOOL)setSecurityProtocol:(id)a0;
- (BOOL)test_connectToUNIXSocket:(id)a0 service:(id)a1;

@end
