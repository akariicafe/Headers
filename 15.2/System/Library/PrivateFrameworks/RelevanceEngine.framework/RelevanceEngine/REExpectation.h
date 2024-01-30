@class NSObject;
@protocol OS_dispatch_group;

@interface REExpectation : NSObject {
    NSObject<OS_dispatch_group> *_group;
    _Atomic int _count;
}

@property (readonly, nonatomic) long long outstandingOperations;

- (void)notifyOperationsCompleteOnQueue:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)notifyOperationsCompleteOrPerformUsingQueue:(id)a0 block:(id /* block */)a1;
- (void)endOperation;
- (void)beginOperation;

@end
