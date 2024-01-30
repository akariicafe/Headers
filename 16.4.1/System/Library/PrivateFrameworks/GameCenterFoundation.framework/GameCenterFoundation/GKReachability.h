@interface GKReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (BOOL)_gkIsOnline;
+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityForLocalWiFi;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)_gkReachabilityWithHostName:(id)a0;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (int)networkStatusForFlags:(unsigned int)a0;
- (int)_gkCurrentReachabilityStatus;
- (BOOL)_gkStartNotifier;
- (void)_gkStopNotifier;
- (BOOL)_gkConnectionRequired;

@end
