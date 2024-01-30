@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CUNetInterfaceMonitor : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct __SCDynamicStore { } *_scStore;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) unsigned int controlFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ flagsChangedHandler;
@property (copy, nonatomic) NSArray *interfaces;
@property (copy, nonatomic) id /* block */ interfacesChangedHandler;
@property (readonly, nonatomic) union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } primaryIPv4Addr;
@property (readonly, nonatomic) union { struct sockaddr { unsigned char sa_len; unsigned char sa_family; char sa_data[14]; } sa; struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } v4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } v6; } primaryIPv6Addr;
@property (copy, nonatomic) id /* block */ primaryIPChangedHandler;
@property (copy, nonatomic) id /* block */ primaryNetworkChangedHandler;
@property (readonly, copy, nonatomic) NSString *primaryNetworkSignature;

- (void)_primaryIPChanged:(BOOL)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_networkInterfacesChanged:(BOOL)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)_ensureStarted;
- (void).cxx_destruct;
- (void)_ensureStopped;

@end
