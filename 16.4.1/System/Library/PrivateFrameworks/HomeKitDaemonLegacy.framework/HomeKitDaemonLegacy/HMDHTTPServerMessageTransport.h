@class NSArray, NSUUID, NSDictionary, NSString, NSMutableArray, HMFHTTPServer;
@protocol HMDHTTPServerMessageTransportDelegate;

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_clientConnections;
}

@property (readonly, nonatomic) HMFHTTPServer *server;
@property (readonly, nonatomic) NSArray *clientConnections;
@property (weak) id<HMDHTTPServerMessageTransportDelegate> delegate;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)maximumSupportedProtocolVersion;

- (void)timerDidFire:(id)a0;
- (id)shortDescription;
- (id)dumpState;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)removeClientConnection:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)_stopWithError:(id)a0;
- (void)removeTXTRecordValueForKey:(id)a0;
- (void)server:(id)a0 didCloseConnection:(id)a1;
- (void)server:(id)a0 didOpenConnection:(id)a1;
- (void)server:(id)a0 didStopWithError:(id)a1;
- (BOOL)server:(id)a0 shouldAcceptConnection:(id)a1;
- (void)setTXTRecordValue:(id)a0 forKey:(id)a1;
- (void)__registerReceiveMessageHandler;
- (void)__registerPingHandler;
- (void)__registerSendMessageHandler;
- (void)__registerSendResponseHandler;
- (id)_clientConnectionForDevice:(id)a0;
- (void)addClientConnection:(id)a0;
- (void)confirmDevice:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithServerIdentifier:(id)a0;
- (void)removeAllClientConnections;
- (void)sendMessage:(id)a0 toDevices:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;

@end
