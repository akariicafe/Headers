@interface FCNetworkOperation : FCOperation

@property (readonly, nonatomic) double preferredTimeoutIntervalForRequest;

- (unsigned long long)maxRetries;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;

@end
