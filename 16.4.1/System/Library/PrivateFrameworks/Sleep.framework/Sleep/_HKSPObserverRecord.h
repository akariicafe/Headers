@protocol NAScheduler;

@interface _HKSPObserverRecord : NSObject

@property (readonly, weak, nonatomic) id observer;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;

- (id)initWithObserver:(id)a0 callbackScheduler:(id)a1;
- (void).cxx_destruct;

@end
