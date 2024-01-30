@class RCMutexLock, NSObject;
@protocol OS_dispatch_group, RCOperationCanceling, RCOperationPrioritizing;

@interface RCAsyncOnceOperation : NSObject

@property (copy, nonatomic) id /* block */ workBlock;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL succeeded;
@property (nonatomic) unsigned long long interest;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *activeGroup;
@property (retain, nonatomic) id<RCOperationCanceling, RCOperationPrioritizing> activeOperation;
@property (nonatomic) long long relativePriority;
@property (retain, nonatomic) RCMutexLock *lock;
@property (readonly, nonatomic) BOOL finishedExecuting;
@property (readonly, nonatomic) BOOL finishedExecutingWithFailure;

- (void).cxx_destruct;
- (id)executeWithCompletionHandler:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
