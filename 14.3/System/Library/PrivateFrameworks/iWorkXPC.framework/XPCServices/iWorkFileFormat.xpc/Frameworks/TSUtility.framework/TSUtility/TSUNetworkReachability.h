@class NSString, NSObject;
@protocol OS_dispatch_queue, TSUNetworkReachabilityCore;

@interface TSUNetworkReachability : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id<TSUNetworkReachabilityCore> _core;
    long long _enableCount;
    long long _cachedStatus;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) BOOL notifierActive;
@property (copy, nonatomic) NSString *hostName;
@property (readonly, nonatomic) long long lastKnownStatus;
@property (copy, nonatomic) id /* block */ reachabilityUpdatedBlock;

+ (long long)networkStatusForFlags:(unsigned int)a0;
+ (id)networkReachabilityWithHostName:(id)a0;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityForInternetConnection;
+ (void)internetReachabilityStatusWithQueue:(id)a0 completion:(id /* block */)a1;
+ (const struct __SCNetworkReachability { } *)newNetworkReachabilityRefWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (const struct __SCNetworkReachability { } *)newNetworkReachabilityRefWithHostName:(const char *)a0;
+ (id)networkReachabilityWithNetworkReachabilityRef:(const struct __SCNetworkReachability { } *)a0 hostNameOrNil:(id)a1;
+ (const struct __SCNetworkReachability { } *)newNetworkReachabilityRefForInternetConnection;
+ (id)internetReachabilityStatusQueue;
+ (BOOL)synchronousHostLookup:(id)a0;
+ (id)p_stringForNetworkReachabilityStatus:(long long)a0;
+ (id)p_stringForNetworkReachabilityFlags:(unsigned int)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; })hostAddress;
- (id)initWithReachabilityRef:(const struct __SCNetworkReachability { } *)a0;
- (void)enableNotifier;
- (void)disableNotifier;
- (void)p_stopNotifier;
- (void)p_updateCachedStatus:(long long)a0;
- (long long)statusFromFlags:(unsigned int)a0;
- (void)updateCachedStatus:(long long)a0;
- (void)p_reachabilityFlagsDidChange:(unsigned int)a0;
- (void)p_startNotifier;
- (void)reachabilityStatusWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;

@end
