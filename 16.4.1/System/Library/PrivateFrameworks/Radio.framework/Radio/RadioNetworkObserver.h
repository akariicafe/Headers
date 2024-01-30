@class NSObject;
@protocol OS_dispatch_queue;

@interface RadioNetworkObserver : NSObject {
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}

@property (readonly, nonatomic) BOOL isUsingNetwork;
@property (readonly, nonatomic) BOOL isCellularNetworkingAllowed;

+ (id)sharedNetworkObserver;

- (void)beginUsingNetwork;
- (void)endUsingNetwork;
- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)a0;

@end
