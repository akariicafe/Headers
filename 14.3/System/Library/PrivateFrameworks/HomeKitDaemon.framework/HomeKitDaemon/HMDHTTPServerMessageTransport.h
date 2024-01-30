@class NSMutableArray, NSArray, NSUUID, NSDictionary, NSString, HMFUnfairLock, HMFHTTPServer;
@protocol HMDHTTPServerMessageTransportDelegate;

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate> {
    HMFUnfairLock *_lock;
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

- (void)removeClientConnection:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (id)shortDescription;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (void)sendMessage:(id)a0 toDevices:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)setTXTRecordValue:(id)a0 forKey:(id)a1;
- (void)removeTXTRecordValueForKey:(id)a0;
- (id)initWithServerIdentifier:(id)a0;
- (void)confirmDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)server:(id)a0 didStopWithError:(id)a1;
- (void)addClientConnection:(id)a0;
- (void)_stopWithError:(id)a0;
- (void)__registerReceiveMessageHandler;
- (void)__registerSendResponseHandler;
- (void)__registerSendMessageHandler;
- (void)__registerPingHandler;
- (void)removeAllClientConnections;
- (id)_clientConnectionForDevice:(id)a0;
- (BOOL)server:(id)a0 shouldAcceptConnection:(id)a1;
- (void)server:(id)a0 didOpenConnection:(id)a1;
- (void)server:(id)a0 didCloseConnection:(id)a1;

@end
