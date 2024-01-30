@class NFMutexLock, NSObject;
@protocol OS_dispatch_group, FCOperationCanceling, FCOperationPrioritizing;

@interface FCAsyncOnceOperation : NSObject

@property (copy, nonatomic) id /* block */ workBlock;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL succeeded;
@property (nonatomic) unsigned long long interest;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *activeGroup;
@property (retain, nonatomic) id<FCOperationCanceling, FCOperationPrioritizing> activeOperation;
@property (nonatomic) long long relativePriority;
@property (retain, nonatomic) NFMutexLock *lock;
@property (readonly, nonatomic) BOOL finishedExecuting;
@property (readonly, nonatomic) BOOL finishedExecutingWithFailure;

- (void).cxx_destruct;
- (id)executeWithCompletionHandler:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (id)executeWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;

@end
