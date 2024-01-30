@class NSArray, NSString, NSCondition;

@interface PFAsyncTaskBarrier : NSObject

@property (readonly) NSCondition *conditionLock;
@property (retain) NSArray *errors;
@property (readonly) NSString *label;
@property (readonly) long long remainingTaskCount;
@property (readonly, copy) id /* block */ completionBlock;

- (void)taskCompleted;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 taskCount:(long long)a1;
- (id)initWithLabel:(id)a0 taskCount:(long long)a1 completionBlock:(id /* block */)a2;
- (void)waitUntilCompletedOrError;
- (void)taskCompletedWithCriticalBlock:(id /* block */)a0;
- (void)taskCompletedWithError:(id)a0;
- (void)taskCompletedWithError:(id)a0 criticalBlock:(id /* block */)a1;
- (void)taskCompletedWithErrors:(id)a0;
- (void)taskCompletedWithErrors:(id)a0 criticalBlock:(id /* block */)a1;
- (void)changeRemainingTaskCount:(long long)a0;
- (void)setRemainingTaskCount:(long long)a0;
- (void)executeCriticalBlock:(id /* block */)a0;
- (void)waitUntilCompleted;
- (id)description;

@end
