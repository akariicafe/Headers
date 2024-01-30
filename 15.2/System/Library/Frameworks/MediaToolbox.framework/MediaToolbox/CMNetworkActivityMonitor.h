@class CMNetworkActivityObserver, NSObject;
@protocol OS_dispatch_queue;

@interface CMNetworkActivityMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic, setter=setCMObserver:) CMNetworkActivityObserver *cmObserver;
@property (nonatomic) long long showingNetworkActivityCount;
@property (nonatomic) long long monitoringActiveCount;
@property (nonatomic) BOOL networkIsActive;

+ (id)sharedActivityMonitor;

- (void)endMonitoring;
- (void)beginMonitoring;
- (id)init;
- (void)dealloc;

@end
