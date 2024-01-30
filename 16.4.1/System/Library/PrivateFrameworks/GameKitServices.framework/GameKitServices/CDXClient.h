@class NSMutableDictionary, NSString, NSData, NSError, NSObject;
@protocol OS_dispatch_queue, CDXClientDelegate, OS_dispatch_source;

@interface CDXClient : NSObject {
    long long holePunchAttemptCount_;
    NSMutableDictionary *sessionLookup_;
    int fd_;
    unsigned long long holePunchSID_;
    unsigned long long prevHolePunchSID_;
    NSString *server_;
    unsigned short port_;
    unsigned short localPort_;
    long long restartCount_;
    struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } cdxaddr_ipv4;
    struct addrinfo { int x0; int x1; int x2; int x3; unsigned int x4; char *x5; struct sockaddr *x6; struct addrinfo *x7; } *cdxMappedIPv4Addr;
    double holePunchInterval_;
    BOOL preblobIsUpToDate_;
    BOOL willReconfigureShortly_;
    struct __SCDynamicStore { } *scDynamicStore_;
    struct __CFRunLoopSource { } *scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_source> *source_;
    NSObject<OS_dispatch_source> *holePunchTimer_;
    void *padding_[10];
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ preblobCallback;
@property (nonatomic) id<CDXClientDelegate> delegate;
@property (readonly) NSData *preblob;
@property (readonly, nonatomic) NSError *error;

+ (id)sharedClient;

- (void)restart;
- (void)setError:(id)a0;
- (void)dealloc;
- (void)start;
- (id)initWithOptions:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)currentSockAddr;
- (id)createSessionWithTicket:(id)a0 sessionKey:(id)a1;
- (unsigned char)currentSockAddrLen;
- (void)handleFDEvent;
- (BOOL)handleHolePunchEvent;
- (void)invalidateSession:(id)a0;
- (void)mapIPv4AddrToIPv6:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
- (void)networkDidChange;
- (void)resetHolepunchTimer;
- (void)sendHolePunch;
- (BOOL)sendRaw:(id)a0;
- (void)setPreblob:(id)a0;
- (void)startListeningOnSockets;
- (void)stopHolePunchTimer;
- (void)stopListeningOnSockets;

@end
