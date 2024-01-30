@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_start;
- (void)addService:(id)a0;
- (void)_exit;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (void)exitWithDelay:(double)a0;
- (void)dealloc;
- (id)serviceWithClass:(Class)a0;
- (void)exit;
- (id)init;
- (void)start;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
