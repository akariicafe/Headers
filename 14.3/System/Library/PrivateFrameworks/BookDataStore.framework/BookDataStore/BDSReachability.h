@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (BOOL)isOffline;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForInternetConnection;
+ (void)_updateIsOffline;

- (void)dealloc;
- (BOOL)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)a0;
- (int)currentReachabilityStatus;
- (void)stopNotifier;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;

@end
