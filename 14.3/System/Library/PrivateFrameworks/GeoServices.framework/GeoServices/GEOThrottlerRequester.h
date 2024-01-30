@interface GEOThrottlerRequester : NSObject

@property (class, readonly, nonatomic) GEOThrottlerRequester *sharedRequester;

- (BOOL)allowRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 forClient:(id)a1 throttlerToken:(id *)a2 error:(id *)a3;
- (BOOL)getThrottleStateFor:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 nextSafeRequestTime:(double *)a1 availableRequestCount:(unsigned int *)a2 error:(id *)a3;
- (BOOL)_getTokenAndInfo:(id *)a0 forRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1 nextSafeRequestTime:(double *)a2 availableRequestCount:(unsigned int *)a3 error:(id *)a4;
- (id)getTokenOrInfoFor:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 nextSafeRequestTime:(double *)a1 availableRequestCount:(unsigned int *)a2 error:(id *)a3;

@end
