@class NSObject;
@protocol OS_dispatch_queue;

@interface _HKTaskCompletionCounter : NSObject {
    id /* block */ _completion;
    NSObject<OS_dispatch_queue> *_queue;
    long long _target;
}

+ (id)counterWithTargetCount:(long long)a0 queue:(id)a1 completion:(id /* block */)a2;

- (void)incrementCounter;
- (void)_invalidate;
- (void)allTasksEnqueued;
- (void)decrementCounter;
- (void).cxx_destruct;

@end
