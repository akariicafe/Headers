@class NSString, SCKOperationThrottler;
@protocol SCKOperationThrottlerDelegate;

@interface SCKTimedOperationThrottler : NSObject <SCKOperationThrottlerDelegate, SCKOperationThrottler>

@property (retain, nonatomic) SCKOperationThrottler *operationThrottler;
@property (weak, nonatomic) id<SCKOperationThrottlerDelegate> delegate;
@property double cooldownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL suspended;

- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (id)initWithDelegate:(id)a0;
- (void)tickleWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)tickle;

@end
