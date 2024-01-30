@class NSObject;
@protocol OS_dispatch_queue;

@interface _NUObservation : NSObject

@property (readonly, weak, nonatomic) id observer;
@property (readonly, nonatomic) long long key;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ block;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 key:(long long)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)notifyWithBlock:(id /* block */)a0;

@end
