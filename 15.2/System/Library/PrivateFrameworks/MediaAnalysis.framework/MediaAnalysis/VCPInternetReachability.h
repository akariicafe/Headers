@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPInternetReachability : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct __SCNetworkReachability { } *_reachability;
}

@property (readonly, nonatomic) BOOL hasWifiOrEthernetConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setReachabilityForFlags:(unsigned int)a0 update:(BOOL)a1;

@end
