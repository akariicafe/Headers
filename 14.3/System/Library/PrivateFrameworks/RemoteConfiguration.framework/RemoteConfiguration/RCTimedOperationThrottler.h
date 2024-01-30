@class RCOperationThrottler, NSString;
@protocol RCOperationThrottlerDelegate;

@interface RCTimedOperationThrottler : NSObject <RCOperationThrottlerDelegate, RCOperationThrottler>

@property (retain, nonatomic) RCOperationThrottler *operationThrottler;
@property (weak, nonatomic) id<RCOperationThrottlerDelegate> delegate;
@property double cooldownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL suspended;

- (id)init;
- (void).cxx_destruct;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)tickleWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (void)tickle;

@end
