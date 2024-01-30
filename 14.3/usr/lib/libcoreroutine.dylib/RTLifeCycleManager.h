@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)exit;
- (void)_start;
- (id)init;
- (void).cxx_destruct;
- (void)_exit;
- (id)serviceWithClass:(Class)a0;
- (void)dealloc;
- (void)addService:(id)a0;
- (void)start;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)exitWithDelay:(double)a0;

@end
