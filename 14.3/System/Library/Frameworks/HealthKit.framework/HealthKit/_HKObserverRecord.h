@class NSObject;
@protocol OS_dispatch_queue;

@interface _HKObserverRecord : NSObject

@property (weak, nonatomic) id observer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 clientQueue:(id)a1;

@end
