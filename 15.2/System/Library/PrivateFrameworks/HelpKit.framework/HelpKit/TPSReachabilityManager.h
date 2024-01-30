@class NSString, TPSReachability;

@interface TPSReachabilityManager : NSObject {
    BOOL _notifying;
    BOOL _hostActive;
}

@property (nonatomic) BOOL reachabilityInitialized;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL internetActive;
@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) TPSReachability *internetReachability;
@property (retain, nonatomic) TPSReachability *hostReachability;

+ (id)defaultManager;

- (void)startNotifier;
- (void)reachabilityChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateStatus:(id)a0;
- (void)stopNotifier;
- (BOOL)isNetworkError:(id)a0;

@end
