@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;
+ (BOOL)isOffline;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForLocalWiFi;
+ (void)_updateIsOffline;

- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)a0;
- (int)currentReachabilityStatus;

@end
