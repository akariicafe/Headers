@class NSString, NSMutableSet, CUBonjourAdvertiser, NSObject, CUNetLinkManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUTCPServer : NSObject {
    NSMutableSet *_connections;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_source> *_listenerSourceV4;
    NSObject<OS_dispatch_source> *_listenerSourceV6;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) CUBonjourAdvertiser *bonjourAdvertiser;
@property (copy, nonatomic) id /* block */ connectionAcceptHandler;
@property (copy, nonatomic) id /* block */ connectionStartedHandler;
@property (copy, nonatomic) id /* block */ connectionEndedHandler;
@property (copy, nonatomic) id /* block */ connectionPrepareHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } interfaceAddress;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int maxConnectionCount;
@property (retain, nonatomic) CUNetLinkManager *netLinkManager;
@property (nonatomic) int tcpListenPort;
@property (nonatomic) int tcpListeningPort;

- (id)detailedDescription;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_invalidated;
- (id)description;
- (void)_handleConnectionAccept:(int)a0;
- (void)_handleConnectionInvalidated:(id)a0 addr:(const union { struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } x0; struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } x1; struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } x2; } *)a1;
- (BOOL)activateDirectAndReturnError:(id *)a0;
- (void)invalidate;

@end
