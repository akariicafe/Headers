@interface GKReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)_gkReachabilityWithHostName:(id)a0;
+ (id)_gkReachabilityForLocalWiFi;
+ (BOOL)_gkIsOnline;

- (void)_gkStopNotifier;
- (void)dealloc;
- (BOOL)_gkConnectionRequired;
- (int)networkStatusForFlags:(unsigned int)a0;
- (int)_gkCurrentReachabilityStatus;
- (BOOL)_gkStartNotifier;
- (int)localWiFiStatusForFlags:(unsigned int)a0;

@end
