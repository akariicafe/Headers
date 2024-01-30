@class NSObject;
@protocol OS_dispatch_queue;

@interface FlexReachability : NSObject {
    BOOL _isNotifying;
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reachabilityQueue;

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForLocalWiFi;

- (BOOL)startNotifier;
- (void)stopNotifier;
- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (id)init;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (long long)currentReachabilityStatus;
- (void).cxx_destruct;
- (BOOL)interventionRequired;

@end
