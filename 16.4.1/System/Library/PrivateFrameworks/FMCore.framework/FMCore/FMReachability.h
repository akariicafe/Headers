@interface FMReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForLocalWiFi;

- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (unsigned long long)networkStatusForFlags:(unsigned int)a0;
- (unsigned long long)currentReachabilityStatus;

@end
