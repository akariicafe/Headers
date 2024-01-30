@interface CUTUnsafePromise : NSObject

+ (id)all:(id)a0;
+ (id)allWithPartialSuccesses:(id)a0;
+ (id)failedPromiseWithError:(id)a0;
+ (id)fulfilledPromiseWithValue:(id)a0;

- (id)then:(id /* block */)a0;
- (id)_init;
- (void)registerResultBlock:(id /* block */)a0;

@end
