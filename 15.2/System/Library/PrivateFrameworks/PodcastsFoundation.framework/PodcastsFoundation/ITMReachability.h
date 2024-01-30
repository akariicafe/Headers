@interface ITMReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityForInternetConnection;

- (long long)networkStatusForFlags:(unsigned int)a0;
- (long long)currentReachabilityStatus;
- (BOOL)startNotifier;
- (BOOL)connectionRequired;
- (void)dealloc;
- (void)stopNotifier;

@end
