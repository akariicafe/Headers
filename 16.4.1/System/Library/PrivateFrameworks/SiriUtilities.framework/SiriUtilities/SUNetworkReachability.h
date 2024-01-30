@class NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface SUNetworkReachability : NSObject {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned long long reachabilityState;

- (id)init;
- (void).cxx_destruct;

@end
