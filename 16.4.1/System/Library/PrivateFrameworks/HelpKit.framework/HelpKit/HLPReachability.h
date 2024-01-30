@interface HLPReachability : NSObject {
    BOOL _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForLocalWiFi;

- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (long long)currentReachabilityStatus;

@end
