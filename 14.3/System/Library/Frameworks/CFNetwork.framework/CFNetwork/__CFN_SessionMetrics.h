@class NSString, NSUUID;
@protocol _NSURLSessionEventDelegate;

@interface __CFN_SessionMetrics : NSObject <_NSURLSessionEventDelegate> {
    id<_NSURLSessionEventDelegate> _delegate;
    NSUUID *_UUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskSuspend:(id)a0 absoluteTime:(double)a1;
- (void).cxx_destruct;
- (void)taskResume:(id)a0 absoluteTime:(double)a1;
- (void)transactionRequestBody:(id)a0 data:(id)a1 absoluteTime:(double)a2;
- (void)transactionResponseEnd:(id)a0 size:(long long)a1 transferSize:(long long)a2 absoluteTime:(double)a3;
- (void)transactionRequestHeaderEnd:(id)a0 request:(id)a1 size:(long long)a2 absoluteTime:(double)a3;
- (void)transactionCreate:(id)a0 withRequest:(id)a1 fromTask:(id)a2 absoluteTime:(double)a3;
- (void)taskComplete:(id)a0 withError:(id)a1 absoluteTime:(double)a2;
- (void)connectionEnd:(id)a0 absoluteTime:(double)a1;
- (void)sessionCreate:(id)a0 pointer:(unsigned long long)a1 absoluteTime:(double)a2;
- (void)sessionDelegateEvent:(id)a0 selector:(SEL)a1 absoluteTime:(double)a2;
- (void)sessionDelegateEnd:(id)a0 selector:(SEL)a1 absoluteTime:(double)a2;
- (void)taskCompletionHandlerEvent:(id)a0 absoluteTime:(double)a1;
- (void)taskDelegateBegin:(id)a0 selector:(SEL)a1 absoluteTime:(double)a2;
- (void)connectionBegin:(id)a0 fromTransaction:(id)a1 properties:(id)a2 absoluteTime:(double)a3;
- (void)transactionResponseHeaderEnd:(id)a0 response:(id)a1 size:(long long)a2 absoluteTime:(double)a3;
- (void)sessionDelegateBegin:(id)a0 selector:(SEL)a1 absoluteTime:(double)a2;
- (void)taskDelegateEnd:(id)a0 selector:(SEL)a1 absoluteTime:(double)a2;
- (void)transactionResponseBody:(id)a0 data:(id)a1 absoluteTime:(double)a2;
- (void)taskCreate:(id)a0 pointer:(unsigned long long)a1 withRequest:(id)a2 fromSession:(id)a3 absoluteTime:(double)a4;
- (void)connectionEstablish:(id)a0 properties:(id)a1 absoluteTime:(double)a2;
- (void)transactionCacheLookupBegin:(id)a0 absoluteTime:(double)a1;
- (void)taskDelegateEvent:(id)a0 selector:(SEL)a1 absoluteTime:(double)a2;
- (void)transactionRequestEnd:(id)a0 size:(long long)a1 transferSize:(long long)a2 absoluteTime:(double)a3;
- (void)transactionCacheLookupEnd:(id)a0 cachedResponse:(id)a1 absoluteTime:(double)a2;
- (void)transactionEnd:(id)a0 reason:(unsigned long long)a1 absoluteTime:(double)a2;
- (void)connectionWait:(id)a0 absoluteTime:(double)a1;
- (void)transactionResponseBegin:(id)a0 absoluteTime:(double)a1;
- (void)transactionRequestBegin:(id)a0 onConnection:(id)a1 absoluteTime:(double)a2;
- (void)sessionDestroy:(id)a0 absoluteTime:(double)a1;

@end
