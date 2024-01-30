@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface ATEnvironmentMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachability;
    unsigned int _powerNotification;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}

@property (nonatomic) unsigned long long thermalPressureLevel;
@property (readonly, nonatomic, getter=hasPower) BOOL power;
@property (readonly, nonatomic, getter=isInternetReachable) BOOL internetReachable;
@property (readonly, nonatomic, getter=isInternetReachableViaOnlyWWAN) BOOL internetReachableViaOnlyWWAN;

+ (id)sharedMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)stop;
- (void)addObserver:(id)a0;
- (void)start;

@end
