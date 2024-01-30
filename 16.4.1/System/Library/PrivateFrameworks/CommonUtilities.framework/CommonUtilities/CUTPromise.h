@interface CUTPromise : CUTUnsafePromise

+ (id)all:(id)a0;
+ (id)allWithPartialSuccesses:(id)a0;
+ (id)failedPromiseWithError:(id)a0;
+ (id)fulfilledPromiseWithValue:(id)a0;

- (id)then:(id /* block */)a0;
- (void)registerResultBlock:(id /* block */)a0;

@end
