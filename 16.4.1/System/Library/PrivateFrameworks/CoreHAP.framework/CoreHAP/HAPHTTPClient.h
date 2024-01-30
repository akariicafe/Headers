@class NSString, NSError, NSObject, HMFNetAddress;
@protocol HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, HAPCoreUtilsHTTPClient, OS_dispatch_queue;

@interface HAPHTTPClient : HMFObject <HAPHTTPClientDebugDelegate, HMFLogging> {
    id<HAPCoreUtilsHTTPClient> _httpClient;
}

@property (copy, nonatomic) NSString *dnsName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<HAPHTTPClientDelegate> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) id<HAPHTTPClientDebugDelegate> debugDelegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *debugDelegateQueue;
@property (nonatomic) BOOL invalidateRequested;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (retain, nonatomic) NSString *wakeAddress;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) HMFNetAddress *peerAddress;
@property (readonly, nonatomic) HMFNetAddress *peerAddressEx;
@property (readonly, nonatomic) NSString *peerEndpointDescription;
@property (retain, nonatomic) NSError *invalidateReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)invalidateWithError:(id)a0;
- (id)logIdentifier;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_connectionDestination;
- (BOOL)_debugDelegateRespondsToSelector:(SEL)a0;
- (id)_deserializeUAPJSONData:(id)a0 error:(id *)a1;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct HTTPMessagePrivate *x1; struct { char x0[8192]; unsigned long long x1; char *x2; unsigned long long x3; char *x4; unsigned long long x5; int x6; char *x7; unsigned long long x8; struct { char *x0; unsigned long long x1; char *x2; unsigned long long x3; char *x4; unsigned long long x5; char *x6; unsigned long long x7; char *x8; unsigned long long x9; char *x10; unsigned long long x11; char *x12; unsigned long long x13; char *x14; char *x15; char *x16; unsigned long long x17; char *x18; unsigned long long x19; } x9; char *x10; unsigned long long x11; int x12; char *x13; unsigned long long x14; unsigned char x15; unsigned long long x16; unsigned char x17; int x18; } x2; unsigned char x3; int x4; unsigned char x5; char *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned char x10[1000]; char *x11; struct *x12; char *x13; unsigned long long x14; struct iovec { void *x0; unsigned long long x1; } x15[2]; struct iovec *x16; int x17; unsigned long long x18; int x19; int x20; int x21; void *x22; void *x23; void *x24; void *x25; void *x26; void *x27; void /* function */ *x28; void /* function */ *x29; id /* block */ x30; int x31; unsigned char x32; long long x33; char *x34; int x35; unsigned long long x36; unsigned int x37; } *)a0 completionHandler:(id /* block */)a1;
- (int)_initializeCoreUtilsHTTPClientWithPort:(long long)a0 withEventsEnabled:(BOOL)a1 factory:(id)a2;
- (void)_sendHTTPRequestToURL:(id)a0 withMethod:(int)a1 requestObject:(id)a2 serializationType:(unsigned long long)a3 timeout:(double)a4 activity:(id)a5 completionHandler:(id /* block */)a6;
- (id)_serializeUAPJSONObject:(id)a0 error:(id *)a1;
- (BOOL)_supportsWoL;
- (BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char[32])a0 writeKey:(unsigned char[32])a1 error:(id *)a2;
- (void)httpClient:(id)a0 didReceiveHTTPMessageWithHeaders:(id)a1 body:(id)a2;
- (void)httpClient:(id)a0 willSendHTTPMessageWithHeaders:(id)a1 body:(id)a2;
- (id)initWithDNSName:(id)a0 port:(long long)a1 eventsEnabled:(BOOL)a2 queue:(id)a3;
- (id)initWithDNSName:(id)a0 port:(long long)a1 eventsEnabled:(BOOL)a2 queue:(id)a3 wakeAddress:(id)a4;
- (id)initWithDNSName:(id)a0 port:(long long)a1 eventsEnabled:(BOOL)a2 queue:(id)a3 wakeAddress:(id)a4 dependencyFactory:(id)a5;
- (id)initWithDNSName:(id)a0 queue:(id)a1;
- (void)sendDELETERequestToURL:(id)a0 withRequestObject:(id)a1 serializationType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)sendGETRequestToURL:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)sendPOSTRequestToURL:(id)a0 withRequestObject:(id)a1 serializationType:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)sendPUTRequestToURL:(id)a0 withRequestObject:(id)a1 serializationType:(unsigned long long)a2 timeout:(double)a3 completionHandler:(id /* block */)a4;
- (void)setDebugDelegate:(id)a0 queue:(id)a1;

@end
