@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (BOOL)isOffline;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (void)_updateIsOffline;

- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (int)networkStatusForFlags:(unsigned int)a0;
- (int)currentReachabilityStatus;
- (BOOL)startNotifier;
- (BOOL)connectionRequired;
- (void)dealloc;
- (void)stopNotifier;

@end
