@class AWAttentionSampler, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, AWSchedulerObserver;

@interface AWScheduler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_clients;
}

@property (weak, nonatomic) id<AWSchedulerObserver> observer;
@property (readonly, nonatomic) AWAttentionSampler *attentionSampler;

+ (id)sharedUnitTestScheduler;
+ (id)sharedScheduler;

- (void)reevaluate;
- (void)armEvents;
- (id)description;
- (void).cxx_destruct;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0 mask:(unsigned long long)a1 timestamp:(unsigned long long)a2;
- (id)initForUnitTest:(BOOL)a0;
- (void)removeInvalidClients;
- (void)addClient:(id)a0;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)removeInvalidClientsWithConnection:(id)a0;

@end
