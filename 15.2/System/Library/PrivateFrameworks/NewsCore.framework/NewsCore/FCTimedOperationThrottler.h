@class NSString, FCOperationThrottler;
@protocol FCOperationThrottlerDelegate;

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler>

@property (retain, nonatomic) FCOperationThrottler *operationThrottler;
@property (weak, nonatomic) id<FCOperationThrottlerDelegate> delegate;
@property double cooldownTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL suspended;

- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)tickle;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)tickleWithCompletion:(id /* block */)a0;

@end
