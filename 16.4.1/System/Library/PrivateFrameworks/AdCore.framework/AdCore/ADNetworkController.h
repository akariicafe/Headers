@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface ADNetworkController : NSObject {
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
    int _networkType;
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL canReachTheNetwork;
@property BOOL isUpdating;

+ (id)sharedNetworkController;

- (int)networkType;
- (id)getDataContext:(id)a0;
- (int)dataIndicatorToConnection:(int)a0;
- (void)_checkForNetwork;
- (void)start;
- (int)cellNetworkType;
- (void)_checkForNetworkAndNotify;
- (void).cxx_destruct;
- (void)_updateStatus:(BOOL)a0;

@end
