@class NSObject;
@protocol OS_dispatch_queue;

@interface DCSelectorDelayer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL waitToFireUntilRequestsStop;
@property (nonatomic) BOOL callOnMainThread;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ fireBlock;
@property double delay;
@property (readonly, nonatomic) BOOL isScheduledToFire;

- (void)cancelPreviousFireRequests;
- (void)callTargetSelector;
- (void)fireImmediately;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 waitToFireUntilRequestsStop:(BOOL)a3 callOnMainThread:(BOOL)a4;
- (void)_cancelFireRequests;
- (void).cxx_destruct;
- (void)dealloc;
- (void)requestFire;

@end
